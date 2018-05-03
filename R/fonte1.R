getwd()
setwd("C:\Users\Administrador\Documents\R")

help(mean) #ajuda local
?mean #ajuda local
??mean #pesquisa ajuda na net

example("mean")
demo(persp) #exibe demos(grafico 3d no caso)

print("Hello wroldsssss")

install.packages('ggplot2')  #instalar pacotes
library(stringr) #carrega pacote na memoria
detach(package:ggplot2) #remove pacote da memoria

(x <- 3+x) # atribuição de variaveis
assign("x",1.5)
y<-'lol'
x+y
idade<-scan()

num<-2.5
num2 <- 4
x <- -123
class(num) #mostra o tipo do valor

is.integer(x) 
y <- as.integer(x)#coloca como int no y
class(y)

char <- 'a'
compl <- 2.5+4i


sqrt(-1+0i)
sqrt(as.complex(-1))
x <- 1;y <- 2;
z <- x<y; class(z)

#Tipos de objetos em R

#vetor
vetor1 <- c(1:100) # c cria vetor
vetor1
length(vetor1) #tamanho vetor
class(vetor1)

#matriz
matriz1 <- matrix(1:10,nrow = 2)
matriz1
length(matriz1)
class(matriz1)

#array
array1 <- array(1:5,dim=c(3,3,3))
array1

#data Frame
View(iris) #visualizar dataset pronto
class(iris)

#lista
lista1 <- list(a=matriz1,b=vetor1)
class(lista1)
lista1

#funçoes
func1<- function(x){
  var1 <- x*x
  return(var1)
}   #cria funções
  
func1(10)  
class(func1)


objects() #lista objetos
ls() #lista objetos

rm(x) #remove objetos
rm(list <- ls())#remove tudo



#------------------------------------------
(v <- c(2,0,1,2,4,2))
class(v)
length(v)
rev(v)#reverte
v1 <- vector()

vetor_caracter <- c("olá","R")
vetor_caracter

vetor_numerico <- c(1.90,45.3,300.3)
vetor_numerico

vetor_logicos <- c(TRUE,FALSE,T,F)
vetor_logicos

vetor2 <- seq(1:10) #cria sequencia de numeros
vetor3 <- rep(1:5)

names(vetor1) <-  c("nome","nome1") #nomeia as colunas

a <- c(1,2,3,4,5)
#---------------------------------------------

sort(sample(1:60,size=6),decreasing = T) #gera sequencia de numeros e organiza


matrix(c(1,2,3,4,5,6,7,8,9,0),nrow = 2)#distribum matriz por linhas
matrix(c(1,2,3,4,5,6,7,8,9),ncol =  3)#distribui matriz por coluna

meus_dados <- c(1:10)
matrix(data = meus_dados,nrow = 5,ncol = 2,byrow = T)


mat <- matrix(c(2,3,4,5),nrow = 2)

matrix(c(1,2,3,4),nc=2,nr=2,dimnames=list(c("linha1","linha2"),c("coluna1","coluna2")))
#cria matriz e nomeia linhas e colunas com dimnames

mat4 <- matrix(c(2,3,4,5),nr=2)
mat5 <- matrix(c(6,7,8,9),nr=2)
cbind(mat4,mat5) #collum bind(une colunas)
rbind(mat4,mat5)#row bind(une por linhas)
dim(mat4)#dimensoes tamanho matriz



#-----------------------------------------------
#String

letters
LETTERS
noquote(LETTERS)

texto <- "isso é uma string"
class(texto)
c <- as.character(3.14)
c;class(c)

nome <- "barack";sobrenome <- "obama"
cat(nome,sobrenome)#junta

sprintf("%s governa os eua a %d anos","barak",8)

substr(texto,12,17) #corta a string
nchar(texto) #numero quantidade de caracteres

install.packages(stringr)
library(stringr)
stringi::stri_stats_latex(texto)


toupper("sadasdas")#pra maiusculo
tolower("SAOIJDOISAJ")#pra minusculo
