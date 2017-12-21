#Importação e Manipulação de Arquivos
#Arquivos txt

# Trabalhando com Arquivos txt
getwd()
setwd("C:/Users/Geio/Desktop/R aula")


# Importando arquivo com read.table()
?read.table

df1 <- read.table("pedidos.txt")
df1
dim(df1)

df1 <- read.table("pedidos.txt", header = TRUE, sep = ',') # cabeçalho e separador
df1
dim(df1)

df1 <- read.table("pedidos.txt", header = TRUE, sep = ',', 
                  col.names = c("var1", "var2", "var3"))
df1

df1 <- read.table("pedidos.txt", header = TRUE, 
                  sep = ',', 
                  col.names = c("var1", "var2", "var3"),
                  na.strings = c('Zico', 'Maradona'))
df1

str(df1)
df1 <- read.table("pedidos.txt", header = TRUE, 
                  sep = ',', 
                  col.names = c("var1", "var2", "var3"),
                  na.strings = c('Zico', 'Maradona'),
                  stringsAsFactors = FALSE)
df1
str(df1)



# Importando arquivo com read.csv()
df2 <- read.csv("pedidos.txt")
df2
dim(df2)

df3 <- read.csv2("pedidos.txt")
df3
dim(df3)

df3 <- read.csv2("pedidos.txt", sep = ',')
df3
dim(df3)


# Importando arquivo com read.delim()
df4 <- read.delim("pedidos.txt")
df4

df4 <- read.delim("pedidos.txt", sep = ',')
df4
dim(df4)


# Importando / Exportando

#Gerando arquivo
write.table(mtcars, file = 'mtcars.txt')
dir()

df_mtcars <- read.table("mtcars.txt")
df_mtcars
dim(df_mtcars)

write.table(mtcars, file = "mtcars2.txt", sep = "|", col.names = NA, qmethod = "double")
list.files()
read.table("mtcars2.txt")
df_mtcars2 <- read.table("mtcars2.txt")
df_mtcars2

df_mtcars2 <- read.table("mtcars2.txt", sep = '|')
df_mtcars2

df_mtcars2 <- read.table("mtcars2.txt", sep = '|', encoding = 'UTF-8')
df_mtcars2

# Importando arquivos da internet
df_pedidos <- read.table("http://datascienceacademy.com.br/blog/aluno/RFundamentos/Datasets/Parte3/pedidos.txt", sep = ',')
df_pedidos

#Arquivos csv
install.packages("readr")
library(readr)

# Abre o promt para escolher o arquivo
meu_arquivo <- read_csv(file.choose())
meu_arquivo <- read_delim(file.choose(), delim = "|")

# Importando arquivos
df1 <- read_table("temperaturas.txt", 
                  col_names = c("DAY","MONTH","YEAR","TEMP"))

head(df1)
str(df1)
read_lines("temperaturas.txt", skip = 0, n_max = -1L)
read_file("temperaturas.txt")

# Exportando e Importando
write_csv(iris, "iris.csv")
dir()

# col_integer(): 
# col_double(): 
# col_logical(): 
# col_character(): 
# col_factor(): 
# col_skip(): 
# col_date() (alias = “D”), col_datetime() (alias = “T”), col_time() (“t”) 

df_iris <- read_csv("iris.csv", col_types = list(
  Sepal.Length = col_double(),
  Sepal.Width = col_double(),
  Petal.Length = col_double(),
  Petal.Width = col_double(),
  Species = col_factor(c("setosa", "versicolor", "virginica"))
))

dim(df_iris)
str(df_iris)

# Importando
df_cad <- read_csv("http://datascienceacademy.com.br/blog/aluno/RFundamentos/Datasets/Parte3/cadastro.csv")
head(df_cad)


install.packages("dplyr")
library(dplyr)
options(warn=-1)

df_cad <- tbl_df(df_cad)
head(df_cad)
View(df_cad)

write.csv(df_cad, "df_cad_bkp.csv")

# Importando vários arquivos simultaneamente
list.files()
lista_arquivos <- list.files('/Dropbox/DSA/BigDataAnalytics-R-Azure/Cap04', full.names = TRUE)
class(lista_arquivos)
lista_arquivos

lista_arquivos2 <- lapply(lista_arquivos, read_csv)
problems(lista_arquivos2)

# Parsing
parse_date("01/02/15", "%m/%d/%y")
parse_date("01/02/15", "%d/%m/%y")
parse_date("01/02/34", "%y/%m/%d")


locale("en")
locale("fr")
locale("pt")


# http://www.bigmemory.org           
install.packages("bigmemory")
library(bigmemory)
?bigmemory
bigdata <- read.big.matrix(filename = "cadastro.csv",
                           sep = ",",
                           header = TRUE,
                           skip = 1)


#Arquivos Excel

# Instalar o Java - JDK 
# http://www.oracle.com/technetwork/java/javase/downloads/jdk8-downloads-2133151.html

# Windows
# Faça o download do JDK gratuitamente no site da Oracle
# Instale no seu computador
# Configure a variável de ambiente JAVA_HOME apontantando para o diretório de instalação do JDK

# Mac e Linux
# Faça o download do JDK gratuitamente no site da Oracle
# Instale no seu computador
# Abra um terminal e execute: sudo R CMD javareconf

# ********** Pacotes que requerem Java **********
# Java previsa estar instalado no seu computador
# xlsx
# rJava 

# ********** Pacotes que requerem Perl **********
# É necessário instalar o interpretador da linguagem Perl
# gdata

# readxl

# Instalando os pacotes
install.packages('rJava')
install.packages("xlsx")
install.packages("readxl")

library(readxl)
library(rJava)
library(xlsx)


# Obs: Ao carregar todos os pacotes que manipulam excel, pode gerar problema de namespace, pois alguns pacotes
# possuem o mesmo nome de funções (que são diferentes entre os pacotes). Para evitar problemas, carregue e use
# os pacotes de forma individual (não carregue todos os pacotes de uma única vez).

# Pacote readxl

# Lista as worksheet no arquivo Excel
excel_sheets("UrbanPop.xlsx")

# Lendo a planilha do Excel
read_excel("UrbanPop.xlsx")
head(read_excel("UrbanPop.xlsx"))
read_excel("UrbanPop.xlsx", sheet = "Period2")
read_excel("UrbanPop.xlsx", sheet = 3)
read_excel("UrbanPop.xlsx", sheet = 4)

# Importando uma worksheet para um dataframe
df <- read_excel("UrbanPop.xlsx", sheet = 3)
head(df)

# Importando todas as worksheets
df_todas <- lapply(excel_sheets("UrbanPop.xlsx"), read_excel, path = 'UrbanPop.xlsx')
df_todas
class(df_todas)

# Pacote xlsx
df2 <- read.xlsx("UrbanPop.xlsx", sheetIndex = 1)
df2

df3 <- read.xlsx2("UrbanPop.xlsx",
                  sheetIndex = 1,
                  startRow = 2,
                  colIndex = 2)
df3


df4 <- readWorksheetFromFile("UrbanPop.xlsx",
                             sheet = 1,
                             startRow = 4,
                             endCol = 2)
df4



write.xlsx(df4, "df4.xlsx", sheetName = "Data Frame")
dir()

#Linguagem SQL no R



#Importação e Manipulação de Bancos de Dados Relacionais

install.packages('RMySQL')
library(RMySQL)
library(ggplot2)
library(dplyr)

# ConexÃÂ£o com o banco de dados
con = dbConnect(MySQL(), user = "daniel", password = "dsa1234", dbname = "titanicDB", host = "localhost")

# Query
qry <- "select pclass, survived, avg(age) as media_idade from titanic where survived = 1 group by pclass, survived;"
dbGetQuery(con, qry)

# Plotar
dados <- dbGetQuery(con, qry)
head(dados)
class(dados)
ggplot(dados, aes(pclass, media_idade)) + geom_bar(stat = "identity")

# Conectando no MySQL com dplyr
con2 <- src_mysql(dbname = "titanicDB", user = "daniel", password = "dsa1234", host = "localhost")

dados2 <- con2 %>%
  tbl("titanic") %>%
  select(pclass, sex, age, survived, fare) %>%
  filter(survived == 0) %>%
  collect()

head(dados2)

# Manipulando dados
dados2 <- con2 %>%
  tbl("titanic") %>%
  select(pclass, sex, survived) %>%
  group_by(pclass, sex) %>%
  summarise(survival_ratio = mean(survived)) %>%
  collect() 

ggplot(dados2, aes(pclass,survival_ratio, color=sex, group=sex)) +
  geom_point(size=3) + geom_line()

# Sumarizando os dados
dados2 <- con2 %>%
  tbl("titanic") %>% 
  filter(fare > 150) %>%
  select(pclass,sex,age,fare) %>%
  group_by(pclass,sex) %>% 
  summarise(avg_age = mean(age),
            avg_fare = mean(fare))

head(dados2)


#Subsetting

## Vetores
x <- c(6.2, 8.1, 5.5, 2.9)
x[]
x

# Índices Positivos - Elementos em posições específicas
x[c(1, 3)]
x[c(1, 1)]
x[order(x)]

# Índices Negativos - Ignora elementos em posições específicas
x[-c(1, 3)]
x[-c(1, 4)]

# Vetor Lógico para gerar subsetting
x[c(TRUE, FALSE)]
x[c(TRUE, FALSE, TRUE, FALSE)]


# Vetor de caracteres
y <- setNames(x, letters[1:4])
y
y[c("d", "c", "a")]
y[c("a", "a", "a")]


## Matrizes
mat <- matrix(1:9, nrow = 3)
colnames(mat) <- c("A", "B", "C")
mat
mat[1:2, ]
mat[1:2, 2:3]

# Função outer() permite que uma Matriz se comporte como vetores individuais
?outer
vals <- outer(1:5, 1:5, FUN = "paste", sep = ",")
vals
vals[c(4, 15)]


## Dataframes
df <- data.frame(x = 1:3, y = 3:1, z = letters[1:3])
df
df$x
df[df$x == 2, ]
df[c(1, 3), ]
df[c("x", "z")]
df[, c("x", "z")]
str(df["x"])
str(df[, "x"])

# Removendo colunas de dataframes
df <- data.frame(x = 1:3, y = 3:1, z = letters[1:3])
df
df$z <- NULL
df
df[setdiff(names(df), "z")]


# Operadores [], [[]] e $
a <- list(x = 1, y = 2)
a
a[1]
a[[1]]
a[["x"]]

b <- list(a = list(b = list(c = list(d = 1))))
b
b[[c("a", "b", "c", "d")]]
b[["a"]][["b"]][["c"]][["d"]]

# x$y é equivalente a x[["y", exact = FALSE]]
var <- "cyl"
mtcars$var
mtcars[[var]]

x <- list(abc = 1)
x$a
x[["a"]]


# Subsetting e atribuição
x <- 1:5
x
x[c(1, 2)] <- 2:3
x

x[-1] <- 4:1
x

# Isso é subsetting
head(mtcars)
mtcars[] <- lapply(mtcars, as.integer)
head(mtcars)

# Isso não é subsetting
mtcars <- lapply(mtcars, as.integer)
head(mtcars)

# Lookup tables
x <- c("m", "f", "u", "f", "f", "m", "m")
lookup <- c(m = "Male", f = "Female", u = NA)
lookup[x]
unname(lookup[x])

# Usando operadores lógicos
x1 <- 1:10 %% 2 == 0
x1
which(x1)
x2 <- which(x1)
x2
y1 <- 1:10 %% 5 == 0
y2 <- which(y1)
y2
intersect(x2, y2)
x1 & y1
union(x2, y2)
setdiff(x2, y2)


#Exercicios
