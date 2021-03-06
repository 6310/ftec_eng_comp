prepare1 <- read.csv("prepare1.csv")
str(prepare1)
summary(prepare1)

#Some functions in R deal with NA's, but some won't work well when there are NA's
#Algumas fun��es lidam com NA's, mas algumas n�o
#You can use na.rm to make them run
#Voc� pode usar na.rm para fazer com que ela rodem
mean(prepare1$T1)
mean(prepare1$T1, na.rm = TRUE)
median(prepare1$T1)
median(prepare1$T1, na.rm = TRUE)

#Retorna as colunas que tem NA
colnames(prepare1)[apply(is.na(prepare1),2,any)]

#Retorna os casos que n�o est�o completos
prepare1[!complete.cases(prepare1),]

#Dealing with NA
#Lindando com NA

#Approach 1:
#Exclude all cases with missing data
#Excluir casos com NA
prepare1$complete<-complete.cases(prepare1)
str(prepare1)
table(prepare1$complete)
prepareA <- subset(prepare1, complete=="TRUE")

summary(prepareA)
str(prepareA)

#Ou

prepareA2 <- na.omit(prepare1)
str(prepareA2)

#Approach2
#Exclude all cases with missing data in a focal column
#Excluir casos com NA em uma coluna focal
prepare1$complete<-NULL
prepare1$complete<-complete.cases(prepare1$T1)
prepareA <- subset(prepare1, complete=="TRUE")
summary(prepareA)
str(prepareA)


#Approach 3

#substitute with the mean
#Substitui��o pela m�dia
prepareB<-prepare1
colnames(prepareB)[apply(is.na(prepareB),2,any)]
summary(prepareB)
#One column alone
#Apenas em uma coluna
prepareB$T1[is.na(prepareB$T1)==TRUE] <- mean(prepareB$T1, na.rm = TRUE)
summary(prepareB)


#Several columns:
#Em v�rias colunas
prepareC <- prepare1
summary(prepareC)
prepareC$complete <- NULL
colnames(prepareC)[apply(is.na(prepareC),2,any)]

#another way of doing the colnames thing
#outra forma de conseguir fazer o que colnames faz
names(prepareC[apply(is.na(prepareC),2,any)])


#We'll use an approach to substitude several columns at a time
#Vamos usar uma abordagem para substituir em v�rias colunas ao mesmo tempo
#We can use which to figure out the position of a variable
#Podemos usar which para descobrir a posi��o da vari�vel
which(colnames(prepareC)=="T2")


#So let's store the names of the variables that contain NA into an object
#Ent�o vamos armazenar os nomes das vari�veis com NA em um objeto
nas <- c(names(prepareC[,apply(is.na(prepareC),2,any)]))
nas

#And find the position of these variables in PrepareC
#E descobrir a posi��o destas vari�veis em PrepareC
which(colnames(prepareC)%in%nas)

# %in% gives a logical vector with "TRUE" in the element where there is a match
# %in% nos d� um vetor l�gico com "TRUE" no elemento em que h� um match
# For instance
# Por exemplo
colnames(prepareC)%in%"Gender"

#Now will create a loop where i will be the position of our variables with NA
#Agora vamos criar um loop em que i ser� a posi��o de nossas vari�veis com NA
#in this loop, we'll designate NAs of each variable to be substituted by the mean of the variable
#Neste loop, vamos designar que NAs sejam substituidos pelas m�dias das suas respectivas colunas

for(i in which(colnames(prepareC)%in%nas)){
  prepareC[is.na(prepareC[,i]), i] <- mean(prepareC[,i], na.rm = TRUE)
}

summary(prepareC)

#We can also substitute for 0
#Tamb�m podemos substituir por 0
for(i in c(which(colnames(prepareC)%in%nas))){
  prepareC[is.na(prepareC[,i]), i] <- 0
}

#or
#ou

prepareC[is.na(prepareC)=="TRUE"] <- 0
summary(prepareC)

#Which is much simpler
#Que � muito mais simples

#Transform factor in dummy coded numerical vectors
#Transformar fator em um vetor num�rico 0 e 1
prepareD <- prepareC

summary(prepareD$Brand)
prepareD$Brand[prepareD$Brand=="apple"] <- "Apple"
prepareD$Brand[prepareD$Brand=="DELL"] <- "Dell"
prepareD$Brand[prepareD$Brand=="dell"] <- "Dell"
prepareD$Brand[prepareD$Brand=="lenovo"] <- "Lenovo"
prepareD$Brand[prepareD$Brand=="hp"|prepareD$Brand=="HP Pavilion"] <- "HP"
prepareD$Brand[prepareD$Brand=="Sony Vaio"] <- "Sony"
prepareD$Brand[prepareD$Brand=="toshiba"|prepareD$Brand=="Toshiba "] <- "Toshiba"
prepareD$Brand[prepareD$Brand=="macintosh" | prepareD$Brand=="MacBook"] <- "Apple"
#The factor function will help up clean repeated levels out
#A fun��o factor vai nos ajudar a limpar n�veis repetido

factor(prepareD$Brand)
prepareD$Brand <- factor(prepareD$Brand)
summary(prepareD$Brand)
prepareD

#Now use class.ind from nnet to transform the levels into variables coded 0 and 1
#Agora vamos usar class.ind, do pacote nnet, para transformar os n�veis em vari�veis com 0 e 1
install.packages("nnet")
library(nnet)

class.ind(prepareD$Brand)
data.frame(prepareD,class.ind(prepareD$Brand))
summary(prepareD)
prepareD <- data.frame(prepareD,class.ind(prepareD$Brand))
str(prepareD)