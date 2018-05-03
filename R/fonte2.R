library(stringr)
strsplit("histogramas e elementos de dados",NULL)
strsplit("histogramas e elementos de dados","") #separa no caracter escolhido


string1 <- c("Esta é a primeira parte da minha string e sera a primeira parte do meu vetor","Aquia minha string continua, mas sera transformada no segundo vetor")

string2 <- c("Precisamos testar outras strings - @???!&&","Analise de dados em R")

str_c(c(string1,string2),sep = "") #junta strings

str_count(string2,"s") #localiza partes na string


arquivo <- read.csv("http://www.gutenberg.org/cache/epub/100/pg100.txt")


#Fatores
vec1 <- c("Macho","Femea","Femea","Macho","Macho")
class(vec1)
fac_vec1 <- factor(vec1)
fac_vec1

