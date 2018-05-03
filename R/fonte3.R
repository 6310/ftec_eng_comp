df <- read.csv2("etnias.csv",sep = ',') #leitura de arquivo
df
str(df) #analise dos tipos de dados
levels(df$Etnia)
plot(df$Idade~df$Etnia,xlab="etnia",ylab="idade",main="idade por etnia")

df <- data.frame()

nomes <- character()
idades <- numeric()
datas <- as.Date(character())
codigos <- integer()
df <- data.frame(nomes,idades,datas,codigos)
df

pais <- c("eua","Dinamarca","holanda","espanha","brasil")
nome <- c("mauricio","pedro","aline","beatriz","marta")
altura <- c(1.78,1.72,1.59,1.63,1.63)
codigo <- c(5001,2183,4702,7965,8890)
pesquisa <- data.frame(pais,nome,altura,codigo)
pesquisa
olhos <- c("verde","azul","azul","castanho","castanho")
pesquisa <- cbind(pesquisa,olhos)
pesquisa
str(pesquisa)
dim(pesquisa)#dimenção
length(pesquisa)
pesquisa$pais


head(mtcars,10)
tail(mtcars,10)
summary(mtcars)

pesquisa[altura<1.70,c('codigo','olhos')]

args(sample)#argumentos da função


#datas
data <- as.Date('10/3/1922',format='%d/%m/%Y')
weekdays(data)


