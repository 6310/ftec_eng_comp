###################################################
###         Uma introdução à Linguagem R        ###
###                  Módulo I                   ###
###                Diego Ribeiro                ###
###          diegoribeiro3219@gmail.com         ###
###            2017-11-04 a 2017-11-11		 	    ###
###################################################

#1 - Sábado - Manhã - 4h
#História da Linguagem R
#Por que Cientistas de Dados usam R?
#Instalando R e RStudio
### Links para a instalação do R e do RStudio
# https://cloud.r-project.org/
# https://www.rstudio.com/products/rstudio/download/preview/
### Referências
# http://r4ds.had.co.nz/
# https://www.rstudio.com/wp-content/uploads/2016/01/rstudio-IDE-cheatsheet.pdf
# https://www.rstudio.com/wp-content/uploads/2016/10/r-cheat-sheet-3.pdf
# https://dl.dropboxusercontent.com/u/2115720/zabala%282016c%29.pdf

#Explorando o RStudio
# Nome dos Contributors
contributors()
# Licença
license()
# Informações sobre a sessão
sessionInfo()

# Ajuda e documentação
# Se souber o nome da função
help()              # Ajuda
help(mean)          # Chama a ajuda para a função 'mean'
?mean
help.start()        # Ajuda em html
# Se não souber o nome da função
help.search('mean') # Busca por tópicos contendo 'mean'
??mean              # Equivalente a 'help.search('mean')'
example(mean)       # Roda os exemplos da documentação de 'mean'
apropos('mean')     # Encontra funções que contenham 'mean'
# Exemplo
example('mean')
# Demonstração de algumas funcionalidades
demo()              # Lista todos as demonstrações disponíveis, mesmo em pacotes não carregados
demo(persp)         # Gráficos 3D          
demo(colors)        # Cores por nome
demo(graphics)

# Usando o RStudio
# Imprimir na tela
print('R - Uma das principais ferramentas do Cientista de Dados')

# Configurando o diretório de trabalho
getwd()                          # Mostra o diretório de Trabalho
setwd("C:/RFundamentos/Parte1")  # Altera o diretório de Trabalho
dir()                            # Apresenta o conteúdo do diretório corrente
ls()                             # Semelhante a dir()
objects()                        # Listando objetos
rm(x)                            # Remove o objeto
rm(list = ls())
save.image(file = 'aula1.RData') # Salvando área de trabalho
q()                              # Sair

#Pacotes e Instalação de Pacotes
# Instalar pacotes
install.packages('randomForest')
install.packages('ggplot2')
install.packages("dplyr")

# Carregar o pacote
library(ggplot2)

# Descarregar o pacote
detach(package:ggplot2)
# Instalando o pacote 'needs' (rodar uma vez)
# install.packages('needs', dep = T)
# library(needs)

#R e Github
#http://curso-r.com/blog/2017/07/17/2017-07-17-rstudio-e-github/

#Operações Aritméticas

2+5             # Adição
sum(2,5)        # Adição através da função 'sum'
2-5             # Subtração
2*5             # Multiplicação
2/5             # Divisão
2^5             # Potenciação
2**5            # Equivale a 2^5, utilizada em Python
sqrt(16)        # Raiz quadrada
10 %% 2         # O resto da divisão: %%
10 %/% 2        # quociente da divisão: %/%
9 %/% 2
9 %% 2
 

# Valores lógicos
# Operadores
5 > 8
5 < 8
5 <= 8
5 >= 8
5 == 8
5 != 8


# Prioridade das operações (calcule mentalmente antes de rodar)
1+2*5 
(1+2)*5
1/2*5^3
1/(2*5)^3

round(153.456789,3) # Arredonda para 3 decimais


#Variáveis
# Atribuindo valores a objetos
x <- 2
x
(x <- 2)
y = 4
4 = y
x*y+z
x <- c(4,5,6)
x
c(4,5,6) -> y
y
assign("x", c(1.3,4,-2))
idade <- scan()

# Tipos de Dados em R
# Numeric - Todos os números criados em R são do tipo numérico
num <-  2.5
num

num2 <- 4
num2

x <-  -123
x
class(x)

# Conversão de tipos Numeric
is.integer(num2)
y = as.integer(num2)
class(y)

x2 <-  3.14
x2
y2 <-  as.integer(3.14) 
y2

as.integer('4.27')
as.integer("Joe")
as.integer('Joe')
as.integer(TRUE)

# Character
char1 <-  'A'
char1

char2 <-  "bolha"
char2

# Complex
compl <-  2.5 + 4i
compl
class(compl)

sqrt(-1) 
sqrt(-1+0i)
sqrt(as.complex(-1)) 


# Logic
x <-  1; y <-  2 
z <-  x > y
z
class(z)

u <-  TRUE; v <-  FALSE 
class(u)
u & v
u | v   
!u

#Tipos de Objetos
### Objetos em R

# Vetor: possui 1 dimensão e 1 tipo de dado
vetor1 <- c(1:10)
vetor1
length(vetor1)
class(vetor1)

# Matriz: possui 2 dimensões e 1 tipo de dado 
matriz1 <- matrix(1:10, nrow =2)
matriz1
length(matriz1)
class(matriz1)

# Array: possui 2 ou mais dimensões e 1 tipo de dado 
array1 <- array(1:5, dim=c(3,3,3))
array1
length(array1)
class(array1)

# Data Frames: dados de diferentes tipos
# Maneira mais fácil de explicar data frames: é uma matriz com diferentes tipos de dados
View(iris)
length(iris)
class(iris)

# Listas: coleção de diferentes objetos
# Diferentes tipos de dados são possíveis e comuns
lista1 <- list(a=matriz1, b=vetor1)
lista1
length(lista1)
class(lista1)

# Funções também são vistas como objetos em R
func1 <- function(x) {
  var1 <- x * x
  return(var1)
}
func1(5)
class(func1)

# Removendo objetos
objects()
rm(array1, func1)
objects()

#Vetores e Operações com Vetores
# Vetores
(v <- c(2,0,1,2,4,2))   # Atribui o vetor (2,0,1,2,4,2) a 'v' e apresenta 'v'
length(v)               # Tamanho do Vetor
rev(v)                  # Reverte o vetor
v1 <- vector()          # Atribuindo um objeto 'vazio'

# Vetor de caracteres
vetor_caracter = c("Olá", "DSA")
vetor_caracter

# Vetor de floats
vetor_numerico = c(1.90, 45.3, 300.5) 
vetor_numerico

# Vetor de valores lógicos
vetor_logico = c(TRUE, FALSE, TRUE, FALSE, FALSE) 
vetor_logico

# Vetor de números inteiros
vetor_integer  = c(2, 4, 6)
vetor_integer

# Utilizando seq()
vetor1 = seq(1:10)
vetor1
is.vector(vetor1)

# Utilizando rep()
vetor2 = rep(1:5)
vetor2

# Indexação de vetores
a <- c(1,2,3,4,5)
a
a[1]
a[6]

b <- c("Data","Science")
b
b[1]
b[2]
b[3]

# Combinando vetores
v1 = c(2, 3, 5) 
v2 = c("aa", "bb", "cc", "dd", "ee") 
c(v1, v2) 

# Operações com Vetores
x = c(1, 3, 5, 7) 
y = c(2, 4, 6, 8)

x * 5
x + y
x - y
x * y
x / y

# Somando vetores com número diferente de elementos
alfa = c(10, 20, 30) 
beta = c(1, 2, 3, 4, 5, 6, 7, 8, 9) 
gama <- alfa + beta 
sort(gama)
sort(gama, decreasing = T)
union(alfa,beta)
intersect(alfa,beta)
setdiff(alfa,beta)

# Vetor Nomeado
v = c("Barack", "Obama") 
v
names(v) = c("Nome", "Sobrenome") 
v
v["Nome"] 

# Curiosidade
sample(1:60, size=6)                      # amostra para jogar na mega-sena
sort(sample(1:60, size=6),decreasing=T)   # ordenando, para facilitar a leitura

#Exercicios

factorial(5)
