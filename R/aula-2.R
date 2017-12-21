###################################################
###         Uma introdução à Linguagem R        ###
###                  Módulo I                   ###
###                Diego Ribeiro                ###
###          diegoribeiro3219@gmail.com         ###
###            2017-11-04 a 2017-11-11		 	    ###
###################################################
#2 - Sábado - Tarde - 4h
#Matrizes e Operações com Matrizes
# Criando Matrizes
# Número de Linhas
matrix (c(1,2,3,4,5,6), nr = 2)
matrix (c(1,2,3,4,5,6), nr = 3)
matrix (c(1,2,3,4,5,6), nr = 6)

# Número de Colunas
matrix ( c ( 1,2,3,4,5,6), nc = 2)

# Help
?matrix

# Matrizes precisam ter um número de elementos que seja múltiplo do número de linhas
matrix ( c (1,2,3,4,5), nc = 2)

# Criando matrizes a partir de vetores e preenchendo a partir das linhas
meus_dados = c(1:10)
matrix(data = meus_dados, nrow = 5, ncol = 2, byrow = T)
matrix(data = meus_dados, nrow = 5, ncol = 2)

# Fatiando a Matriz
mat <- matrix(c(2,3,4,5), nr = 2)
mat
mat[1,2]
mat[2,2]
mat[1,3]
mat[,2]

# Criando uma matriz diagonal
matriz = 1:3
diag (matriz)

# Extraindo vetor de uma matriz diagonal
vetor = diag(matriz)
diag (vetor)

# Transposta da matriz
W <- matrix ( c (2,4,8,12 ), nr =2, ncol = 2)
W
t(W)
U <- t(W)
U

# Obtendo uma matriz inversa
solve(W)

# Multiplicação de Matrizes
mat1 <- matrix(c(2,3,4,5), nr = 2)
mat1
mat2 <- matrix(c(6,7,8,9), nr = 2)
mat2
mat1 * mat2
mat1 / mat2
mat1 + mat2
mat1 - mat2

# Multiplicando Matriz com Vetor
x = c(1:4)
x
y <- matrix(c(2,3,4,5), nr = 2)
x * y 

# Nomeando a Matriz
mat3 <- matrix(c('Futebol', 'Natação', 'Campo', 'Piscina'), nr = 2)
mat3
dimnames(mat3) = (list( c("Linha1", "Linha2"), c("Coluna1", "Coluna2")))
mat3

# Identificando linhas e colunas no momento de criação da Matriz
matrix (c(1,2,3,4), nr = 2, nc = 2, dimnames = list(c("Linha 1", "Linha 2" ), c( "Coluna 1", " Coluna 2") ))

# Combinando Matrizes
mat4 <- matrix(c(2,3,4,5), nr = 2)
mat4
mat5 <- matrix(c(6,7,8,9), nr = 2)
mat5
cbind(mat4, mat5)
rbind(mat4, mat5)
dim(mat5)

# Desconstruindo a Matriz
c(mat4)

#Listas e Operações com Listas
# Use list() para criar listas

# Lista de strings
lista_caracter = list('A', 'Bem-vindo', 'DSA')
lista_caracter

# Lista de números inteiros
lista_inteiros = list(2, 3, 4)
lista_inteiros

# Lista de floats
lista_numerico = list(1.90, 45.3, 300.5)
lista_numerico

# Lista de números complexos
lista_complexos = list(5.2+3i, 2.4+8i)
lista_complexos

# Lista de valores lógicos
lista_logicos = list(TRUE, FALSE, FALSE)
lista_logicos

# Listas Compostas
lista_composta1 = list("A", 3, TRUE)
lista_composta1

lista1 <- list(1:10, c("Maria", "João", "Alfredo"), rnorm(10))
lista1
?rnorm

# Slicing da Lista
lista1[1]
lista1[c(1,2)]
lista1[2]
lista1[[2]][1]  
lista1[[2]][1] = "Monica" 
lista1

# Para nomear os elementos - Listas Nomeadas
names(lista1) <- c("inteiros", "caracteres", "numéricos")
lista1

vec_num <- 1:4
vec_char <- c("A", "B", "C", "D")
lista2 <- list(Numeros = vec_num, Letras = vec_char)
lista2

# Nomear os elementos diretamente
lista2 <- list(elemento1=3:5, elemento2=c(7.2,3.5))
lista2

# Trabalhando com elementos específicos da lista
names(lista1) <- c("inteiros", "caracteres", "numéricos")
lista1
lista1$caracteres
length(lista1$inteiros)
lista1$inteiros

# Verificar o comprimento da lista
length(lista1)

# Podemos extrair um elemento específico dentro de cada nível da lista
lista1$caracteres[2]

# Mode dos elementos
mode(lista1$numéricos)
mode(lista1$caracteres)

# Combinando 2 listas
lista3 <- c(lista1, lista2)
lista3

# Transformando um vetor em lista
v = c(1:3)
v
l  = as.list(v)
l

# Unindo 2 elementos em uma lista
mat = matrix(1:4, nrow = 2)
mat
vec = c(1:9)
vec
lst = list(mat, vec)
lst

#Strings
letters                       # letras minusculas
LETTERS                       # letras maiusculas
LETTERS[1]
noquote(letters)              # sem aspas


# String
texto <- "Isso é uma string!"
texto

x = as.character(3.14) 
x
class(x) 

# Concatenando Strings
nome = "Barack"; sobrenome = "Obama" 
paste(nome, sobrenome)
cat(nome, sobrenome)

# Formatando a saída
sprintf("%s governa os EUA há %d anos", "Barack Obama", 8) 

# Extraindo parte da string
texto <- "Isso é uma string!"
substr(texto, start=12, stop=17) 
substr('abcdef', 2, 4)        # apresenta da segunda ate a quarta posição
?substr

# Contando o número de caracteres
nchar(texto)
stringi::stri_stats_latex(texto)  # relatório mais completo

# Alterando a capitalização
tolower("Histogramas e Elementos de Dados")
toupper("Histogramas e Elementos de Dados")


# Usando stringr
library(stringr)

# Dividindo uma string em caracteres
strsplit("Histogramas e Elementos de Dados", NULL)
?strsplit
# Dividindo uma string em caracteres, após o caracter espaço
strsplit("Histogramas e Elementos de Dados", " ")
x <- c('Tche', 'Churrasco', 'Chimarrao', 'Farrapo', 'Gaita', 'Bah')
strsplit(x, 'a')              # retira a letra 'a'


# Trabalhando com strings
string1 <- c("Esta é a primeira parte da minha string e será a primeira parte do meu vetor", 
             "Aqui a minha string continua, mas será transformada no segundo vetor")
string1
string2 <- c("Precisamos testar outras strings - @???!§$",
             "Análise de Dados em R")
string2

# Adicionando 2 strings
str_c(c(string1, string2), sep="")

# Podemos contar quantas vezes um caracter aparece no texto
str_count(string2, "s")

# Localiza a primeira e última posição em que o caracter aparece na string
str_locate_all(string2, "s")

# Substitui a primeira ocorrência de um caracter
str_replace(string2, "\\s", "")

# Substitui todas as ocorrências de um caracter
str_replace_all(string2, "\\s", "")

# Detectando padrões nas strings
string1 <- "23 mai 2000"
string2 <- "1 mai 2000"
padrao <- "mai 20"
grepl(pattern = padrao, x = string1)
padrao <- "mai20"
grepl(pattern = padrao, x = string1)

# Importando arquivo txt
# http://www.gutenberg.org/cache/epub/100/pg100.txt

arquivo <- read.csv("http://www.gutenberg.org/cache/epub/100/pg100.txt")
head(arquivo)
tail(arquivo)
str_count(arquivo, "7")
str_locate_all(arquivo, "7")

# Uma breve introdução. Para aprofundar pesquisar sobre text mining

#Fatores e Fatores Ordenados
# Fatores
vec1 <- c("Macho","Femea","Femea","Macho","Macho")
vec1
fac_vec1 <- factor(vec1)
fac_vec1
class(vec1)
class(fac_vec1)

# Variáveis categóricas nominais
# Não existe uma ordem implícita
animais <- c("Zebra", "Pantera", "Rinoceronte", "Macaco", "Tigre")
animais
class(animais)
fac_animais <- factor(animais)
fac_animais
class(fac_animais)
levels(fac_animais)

# Variáveis categóricas ordinais
# Possuem uma ordem natural
grad <- c("Mestrado", "Doutorado", "Bacharelado", "Mestrado", "Mestrado")
grad
fac_grad <- factor(grad, order = TRUE, levels = c("Doutorado", "Mestrado", "Bacharelado"))
fac_grad
levels(fac_grad)

# Sumarizar os dados fornece uma visão geral sobre o conteúdo das variáveis
summary(fac_grad)
summary(grad)

vec2 <- c("M", "F", "F", "M", "M", "M", "F", "F", "M", "M", "M", "F", "F", "M", "M")
vec2
fac_vec2 <- factor(vec2)
fac_vec2
levels(fac_vec2) <- c("Femea", "Macho")
fac_vec2
summary(fac_vec2)
summary(vec2)


# Mais exemplos
data = c(1,2,2,3,1,2,3,3,1,2,3,3,1)
fdata = factor(data)
fdata


rdata = factor(data,labels=c("I","II","III"))
rdata

# Fatores Não-Ordenados
set1 <- c("AA", "B", "BA", "CC", "CA", "AA", "BA", "CC", "CC")
set1

# Transformando os dados. O R apenas criou os níveis, o que não significa que exista uma hierarquia
f.set1 <- factor(set1)
f.set1
class(f.set1)
is.ordered(f.set1)

# Fatores Ordenados
o.set1 <- factor(set1, 
                 levels = c("CA", "BA", "AA", "CC", "B"), 
                 ordered = TRUE)

o.set1
is.ordered(o.set1)

as.numeric(o.set1)
table(o.set1)


# Fatores e Dataframes
df <- read.csv2("etnias.csv", sep = ',')
df


# Variáveis do tipo fator
str(df)

# Níveis dos fatores
# Internamente, o R armazena valores inteiros e faz um mapeamento para as strings (em ordem alfabética)
# e agrupa as estatísticas por níveis. Agora, se fizermos sumarização de estatísticas, é possível visualizar 
# a contabilização de  para cada categoria
levels(df$Etnia)
summary(df$Etnia)


# Plot
# Agora se fizermos um plot, temos um boxplot para estas variáveis categóricas
plot(df$Idade~df$Etnia, xlab = 'Etnia', ylab = 'Idade', main = 'Idade por Etnia')


#DataFrames e Operações com DataFrames
# Data frame
# Criando um dataframe vazio
df <- data.frame()
class(df)
df

# Criando vetores vazios
nomes <- character()
idades <- numeric()
datas <- as.Date(character())
codigos <- integer()

df <- data.frame(c(nomes, idades, datas, codigos))
df


# Criando vetores
pais = c("EUA", "Dinamarca", "Holanda", "Espanha", "Brasil")
nome = c("Maurício", "Pedro", "Aline", "Beatriz", "Marta")
altura = c(1.78, 1.72, 1.63, 1.59, 1.63)
codigo = c(5001, 2183, 4702, 7965, 8890)


# Criando um dataframe de diversos vetores
pesquisa = data.frame(pais, nome, altura, codigo)
pesquisa

# Adicionando um novo vetor a um dataframe existente
olhos = c("verde", "azul", "azul", "castanho", "castanho")
pesq = cbind(pesquisa, olhos)
pesq


# Informações sobre o dataframe
str(pesq)
dim(pesq)
length(pesq)


# Obtendo um vetor de um dataframe
pesq$pais
pesq$nome


# Extraindo um único valor
pesq[1,1]
pesq[3,2]


# Número de Linhas e Colunas
nrow(pesq)
ncol(pesq)

# Primeiros elementos do dataframe
head(pesq)
head(mtcars)


# Últimos elementos do dataframe
tail(pesq)
tail(mtcars)


# Data frames built-in do R
?mtcars
mtcars
summary(mtcars$mpg)
plot(mtcars$mpg, mtcars$disp)
plot(mtcars$mpg, mtcars$wt)

# Filtro para um subset de dados que atendem a um critério
pesq[altura < 1.60,]
pesq[altura < 1.60, c('codigo', 'olhos')]
pesq


# Dataframes Nomeados
names(pesq) <- c("País", "Nome", "Altura", "Código", "Olhos")
pesq

colnames(pesq) <- c("Var 1", "Var 2", "Var 3", "Var 4", "Var 5")
rownames(pesq) <- c("Obs 1", "Obs 2", "Obs 3", "Obs 4", "Obs 5")
pesq


# Importando arquivos
# read.xls() - Excel
# read.mtp() - Minitab
# read.spss() - SPSS
# read.table() - Arquivos txt
# read.csv() - Arquivos csv
# read.delim() - Leitura de arquivos delimitados

setwd("/opt/DSA/BigDataAnalytics-R-Azure/Parte1")
?read.csv
df2 <- data.frame(read.csv(file = 'dframe.csv', header = TRUE, sep = ","))
head(df2)
summary(df2)

df2$Diabete
df2$status
df2$Status

plot(df2$Admdate)

# Combinando dataframes
df3 <- merge(pesq, df2)
df3

#Estruturas de controle (for, while, if-else, repeat)
# If
x = 25
if (x < 30) 
{"Este número é menor que 30"}

# Chaves não são obrigatórios, mas altamente recomendados
if (x < 30) 
  "Este número é menor que 30"

# Else
if (x < 7) {
  "Este número é menor que 7"
} else {
  "Este número não é menor que 7"
}

# Ifelse
x = 5
ifelse (x < 6, "Correto!", NA)
x = 9
ifelse (x < 6, "Correto!", NA)

# Expressões ifelse aninhadas
x = c(7,5,4)
ifelse(x < 5, "Menor que 5", 
       ifelse(x == 5, "Igual a 5", "Maior que 5"))

# Rep
rep(rnorm(10), 5)

# Repeat
x = 1
repeat {
  x = x + 3
  if (x > 99)
    break
  print(x)}

# Loop For
for (i in 1:20) {print(i)}
for (q in rnorm(10)) {print(q)}

# Ignora alguns elementos dentro do loop
for(i in 1:22){
  if(i == 13 | i == 15)
    next
  print (i)}

# Interromper o loop
for(i in 1:22){
  if(i == 13)
    break
  print (i)}

# Loop While
x = 1
while(x < 5){
  x = x + 1
  print(x)
}

# O loop while não será executado
y = 6
while(y < 5){
  y = y+10
  print(y)
}

# Funções

# Help
?sample
args(sample)
args(mean)
args(sd)

# Funções Built-in
abs(-43)
sum(c(1:5))
mean(c(1:5))
round(c(1.1:5.8))
rev(c(1:5))
seq(1:5)
sort(rev(c(1:5)))
append(c(1:5), 6)

vec1 <- c(1.5, 2.5, 8.4, 3.7, 6.3)
vec2 <- rev(vec1)
vec2

# Funções dentro de funções
plot(rnorm(10))
mean(c(abs(vec1), abs(vec2)))


# Criando funções
myfunc <- function(x) { x + x }
myfunc(10)
class(myfunc)

myfunc2 <- function(a, b) {
  valor = a ^ b
  print(valor)
}

myfunc2(3, 2)

jogando_dados <- function() {
  num <- sample(1:6, size = 1) #Local
  num
}

jogando_dados()

# Escopo
print(num)
num <- c(1:6)
num #Global

# Funções sem número definido de argumentos
vec1 <- (10:13)
vec2 <- c("a", "b", "c", "d")
vec3 <- c(6.5, 9.2, 11.9, 5.1)

myfunc3 <- function(...){
  df = data.frame(cbind(...))
  print(df)
}

myfunc3(vec1)

myfunc3(vec2, vec3)

myfunc3(vec1, vec2, vec3)





#Trabalhando com Datas
as.Date('11/3/1981', format = '%d/%m/%Y')   # coloca no formato de data...
as.Date('3:11:1981', format = "%m:%d:%Y")   # ... não importa o separador
(data <- as.Date('11/3/1981', format='%d/%m/%Y'))
class(data)       # classe Date
months(data)      # mês
weekdays(data)    # dia da semana
quarters(data)    # trimestre
Sys.Date() - data # número de dias entre hoje e data
#Gráficos parte 1
#Gramática dos Gráficos
#(Scatter Plots, Box Plots, Bar Plots, Histogramas e Pie Charts)
#Breve introdução ao pacote ggplot2

# Plots
# Graficos no R - BarPlot, Pie Chart, Line Chart, Scatter Plot, Histograma e Treemap
# http://www.r-graph-gallery.com/

# Definindo a pasta de trabalho
# Substitua o caminho abaixo pela pasta no seu computador
setwd("D:/Dropbox/DSA/PowerBI-DataScience/Cap11/06-Plots")
getwd()

# Dados
my_vector = c(3,12,5,18,45)
names(my_vector) = c("A","B","C","D","E")
my_vector

# Barplot
barplot(my_vector)
barplot(my_vector, col = c(1,2,3,4,5) )
png("barplot.png" , width = 480, height = 480 )
barplot(my_vector, col = rgb(0.5,0.1,0.6,0.6), xlab = "Categorias", ylab = "Valores", main = "Barplot em R" , ylim = c(0,60) )
dev.off()

# Ggplot2 
library(ggplot2)
head(mtcars)

# Barplot
ggplot(mtcars, aes(x=as.factor(cyl) )) + 
  geom_bar()

ggplot(mtcars, aes(x=as.factor(cyl), fill=as.factor(cyl) )) +  
  geom_bar( ) +
  scale_fill_manual(values = c("red", "green", "blue") )

# Criando dados fake
data = data.frame(group = c("A ","B ","C ","D ") , value=c(33,62,56,67) )

# Barplot
ggplot(data, aes(x = group, y = value ,fill = group )) + 
  geom_bar(width = 0.85, stat="identity")

# Pie Chart
slices <- c(10, 12,4, 16, 8)
lbls <- c("US", "UK", "Australia", "Germany", "France")
pie(slices, labels = lbls, main = "Beer per Country")


# Pie Chart com percentuais
slices <- c(10, 12, 4, 16, 8) 
lbls <- c("US", "UK", "Australia", "Germany", "France")
pct <- round(slices/sum(slices)*100)
lbls <- paste(lbls, pct) 
lbls <- paste(lbls,"%",sep="") 
pie(slices,labels = lbls, col=rainbow(length(lbls)),
    main="Beer per Country")


# Pie Chart 3D
install.packages("plotrix")
library(plotrix)

slices <- c(10, 12, 4, 16, 8) 
lbls <- c("US", "UK", "Australia", "Germany", "France")
pie3D(slices,labels=lbls,explode=0.1,
      main="Beer per Country")


# Line

# Dados
cars <- c(1, 3, 6, 4, 9)
trucks <- c(2, 5, 4, 5, 12)

# Plot
plot(cars, type="o", col="blue", ylim=c(0,12))

lines(trucks, type="o", pch=22, lty=2, col="red")

title(main="Autos", col.main="red", font.main=4)


# Boxplot 
library(ggplot2)
head(mpg)

# Plot
ggplot(mpg, aes(x=reorder(class, hwy), y=hwy, fill=class)) + 
  geom_boxplot() +
  xlab("class") +
  theme(legend.position="none")


# Scatter Plot
library(ggplot2)
data = data.frame(cond = rep(c("condition_1", "condition_2"), each=10), 
                  my_x = 1:100 + rnorm(100,sd=9), my_y = 1:100 + rnorm(100,sd=16) )

ggplot(data, aes(x=my_x, y=my_y)) + 
  geom_point(shape=1)

# Adiciona linha de regressao
ggplot(data, aes(x=my_x, y=my_y)) +    
  geom_point(shape=1) +  
  geom_smooth(method = lm , color="red", se=FALSE) 

# Adiciona smooth
ggplot(data, aes(x=my_x, y=my_y)) +    
  geom_point(shape=1) +  
  geom_smooth(method=lm , color="red", se=TRUE)  


# Treemap
install.packages("treemap")
library(treemap)

# Dados
group=c(rep("group-1",4),rep("group-2",2),rep("group-3",3))
subgroup=paste("subgroup" , c(1,2,3,4,1,2,1,2,3), sep="-")
value=c(13,5,22,12,11,7,3,1,23)
data=data.frame(group,subgroup,value)

# Labels
treemap(data, index=c("group","subgroup"),     
        vSize="value", type="index",
        fontsize.labels=c(15,12),               
        fontcolor.labels=c("white","orange"),    
        fontface.labels=c(2,1),                 
        bg.labels=c("transparent"),             
        align.labels=list(
          c("center", "center"), 
          c("right", "bottom")),                                  
        overlap.labels=0.5,           
        inflate.labels=F                     
)


# Customizando
treemap(data, index=c("group","subgroup"), vSize="value", type="index",
        border.col=c("black","white"),          
        border.lwds=c(7,2)                       
)


# Histograma
x <- mtcars$mpg 

h <- hist(x, breaks = 10, col="red", xlab = "Miles Per Gallon", 
          main = "Histograma com Curva de Distribuicao") 

xfit <- seq(min(x),max(x),length=40) 
yfit <- dnorm(xfit,mean=mean(x),sd=sd(x)) 
yfit <- yfit*diff(h$mids[1:2])*length(x) 
lines(xfit, yfit, col="blue", lwd=2)

# Usando o ggplot2
library(ggplot2)

# dataset
data = data.frame(value = rnorm(10000))

# Custom Binning. I can just give the size of the bin
ggplot(data, aes(x=value)) + 
  geom_histogram(binwidth = 0.05)

# Uniform color
ggplot(data, aes(x=value)) + 
  geom_histogram(binwidth = 0.2, color="white", fill=rgb(0.2,0.7,0.1,0.4) ) 

# Proportional color
ggplot(data, aes(x=value)) + 
  geom_histogram(binwidth = 0.2, aes(fill = ..count..) )

#Exercicios
#Big Data na Prática


