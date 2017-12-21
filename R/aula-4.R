###################################################
###         Uma introdução à Linguagem R        ###
###                  Módulo I                   ###
###                Diego Ribeiro                ###
###          diegoribeiro3219@gmail.com         ###
###            2017-11-04 a 2017-11-11		 	    ###
###################################################
#4 - Sábado - Tarde - 4h
#Um pouco de estatística
#Praticando Média, Mediana e Moda

# Medidas de Posi??o

# Definindo a pasta de trabalho
# Substitua o caminho abaixo pela pasta no seu computador
setwd("D:/Dropbox/DSA/PowerBI-DataScience/Cap11/01-Medidas-Posicao")
getwd()

# Carregando o dataset
vendas <- read.csv("Vendas.csv", fileEncoding = "windows-1252")

# Resumo do dataset
View(vendas)
str(vendas)
summary(vendas$Valor)
summary(vendas$Custo)

# M?dia
?mean
mean(vendas$Valor)
mean(vendas$Custo)
mean(vendas$Valor, trim = 0.1)
mean(vendas$Valor, na.rm = TRUE)

# M?dia Ponderada
?weighted.mean
weighted.mean(vendas$Valor, w = vendas$Custo)

# Mediana
median(vendas$Valor)
median(vendas$Custo)

# Moda
# Criando uma fun??o
getmode <- function(v) {
  uniqv <- unique(v)
  uniqv[which.max(tabulate(match(v, uniqv)))]
}

# Obtendo a Moda
result <- getmode(vendas$Valor)
print(result)

# Criando gr?fico de m?dias por Estado com ggplot2
install.packages("ggplot2")
library(ggplot2)

ggplot(vendas) + stat_summary(aes(x = vendas$Estado, y = vendas$Valor),
                              fun.y = mean, geom = "bar", 
                              fill = "lightgreen", col = "grey50")

#Summary
#Desvio Padrão# Medidas de Dispers?o

# Definindo a pasta de trabalho
# Substitua o caminho abaixo pela pasta no seu computador
setwd("D:/Dropbox/DSA/PowerBI-DataScience/Cap11/02-Medidas-Dispersao")
getwd()

# Carregando o dataset
vendas <- read.csv("Vendas.csv", fileEncoding = "windows-1252")

# Resumo do dataset
View(vendas)
str(vendas)
summary(vendas$Valor)

# Vari?ncia
var(vendas$Valor)

# Desvio Padr?o
sd(vendas$Valor)

# Revis?o 1

# Definindo a pasta de trabalho
# Substitua o caminho abaixo pela pasta no seu computador
setwd("D:/Dropbox/DSA/PowerBI-DataScience/Cap11/03-Revisao1")
getwd()

# Carregando o dataset
amostras <- read.csv("amostras.csv", fileEncoding = "windows-1252")

# Resumo do dataset
View(amostras)
str(amostras)
summary(amostras$AmostraA)
summary(amostras$AmostraB)

# M?dia
# A m?dia de uma vari?vel de observa??o ? uma medida num?rica da localiza??o central dos valores dos dados. 
# ? a soma de seus valores de dados divididos pela contagem de dados.

# Mediana
# A mediana de uma vari?vel ? o valor no meio quando os dados s?o classificados em ordem crescente. 
# ? uma medida ordinal da localiza??o central dos valores de dados.

# Vari?ncia
# A vari?ncia ? uma medida num?rica de como os valores dos dados est?o dispersos em torno da m?dia.

# Desvio Padr?o
# O desvio padr?o de uma vari?vel ? a raiz quadrada de sua vari?ncia.


# Exemplo 1 - Comparar as amostras dos pre?os de a??es
# Que medidas usar?
# M?dia, Desvio Padr?o e CV
mean(amostras$AmostraA)
mean(amostras$AmostraB)
sd(amostras$AmostraA)
sd(amostras$AmostraB)
cvA <- sd(amostras$AmostraA) / mean(amostras$AmostraA) * 100
cvB <- sd(amostras$AmostraB) / mean(amostras$AmostraA) * 100
cvA
cvB


# Exemplo 2 - Comparar as amostras de produtos fabricados
# Que medidas usar?
# Vari?ncia
var(amostras$AmostraA)
var(amostras$AmostraB)


# Exemplo 3 - Comparar as amostras na produ??o de camisas
# Que medidas usar?
# Moda
calculaModa <- function(v) {
  uniqv <- unique(v)
  uniqv[which.max(tabulate(match(v, uniqv)))]
}

calculaModa(amostras$AmostraA)
calculaModa(amostras$AmostraB)


# Exemplo 4 - Comparar as amostras das notas de alunos
# Que medidas usar?
# Mediana
median(amostras$AmostraA)
median(amostras$AmostraB)



#Regressão Linear

# Regressão Linear
# https://archive.ics.uci.edu/ml/datasets/Student+Performance
# Dataset com dados de estudantes
# Vamos prever a nota final (grade) dos alunos

# Carregando o dataset
df <- read.csv2('http://datascienceacademy.com.br/blog/aluno/RFundamentos/Datasets/ML/estudantes.csv')

# Explorando os dados
head(df)
summary(df)
str(df)
any(is.na(df))

# install.packages("ggplot2")
# install.packages("ggthemes")
# install.packages("dplyr")
library(ggplot2)
library(ggthemes)
library(dplyr)

# Obtendo apenas as colunas numéricas
colunas_numericas <- sapply(df, is.numeric)
colunas_numericas

# Filtrando as colunas numéricas para correlação
data_cor <- cor(df[,colunas_numericas])
data_cor
head(data_cor)

# Pacotes para visualizar a análise de correlação
# install.packages('corrgram')
# install.packages('corrplot')
library(corrplot)
library(corrgram)

# Criando um corrplot
corrplot(data_cor, method = 'color')

# Criando um corrgram
corrgram(df)
corrgram(df, order = TRUE, lower.panel = panel.shade,
         upper.panel = panel.pie, text.panel = panel.txt)

# Criando um histograma
ggplot(df, aes(x = G3)) + 
  geom_histogram(bins = 20, 
                 alpha = 0.5, fill = 'blue') + 
  theme_minimal()


# Treinando e Interpretando o Modelo
# Import Library
# install.packages("caTools")
library(caTools)

# Criando as amostras de forma randômica
set.seed(101) 
?sample.split
amostra <- sample.split(df$age, SplitRatio = 0.70)

# ***** Treinamos nosso modelo nos dados de treino *****
# *****   Fazemos as predições nos dados de teste  *****

# Criando dados de treino - 70% dos dados
treino = subset(df, amostra == TRUE)

# Criando dados de teste - 30% dos dados
teste = subset(df, amostra == FALSE)

# Gerando o Modelo (Usando todos os atributos)
modelo_v1 <- lm(G3 ~ ., treino)
modelo_v2 <- lm(G3 ~ G2 + G1, treino)
modelo_v3 <- lm(G3 ~ absences, treino)
modelo_v4 <- lm(G3 ~ Medu, treino)

# Interpretando o Modelo
summary(modelo_v1)
summary(modelo_v2)
summary(modelo_v3)
summary(modelo_v4)

# par(mfrow = c(2,2))
# plot(modelo_v3)

# ****************************************************
# *** Estas informações abaixo é que farão de você ***
# *** um verdadeiro conhecedor de Machine Learning ***
# ****************************************************

# Resíduos
# Diferença entre os valores observados de uma variável e seus valores previstos
# Seus resíduos devem se parecer com uma distribuição normal, o que indica
# que a média entre os valores previstos e os valores observados é próximo de 0 (o que é bom)

# Coeficiente - Intercept - a (alfa)
# Valor de a na equação de regressão

# Coeficiente - G2 - b (beta)
# Neste caso, o valor de G2 representa o valor de b na equação de regressão

# Erro Padrão
# Medida de variabilidade na estimativa do coeficiente a (alfa). O ideal é que este valor 
# seja menor que o valor do coeficiente, mas nem sempre isso irá ocorrer.

# Asteriscos 
# Os asteriscos representam os níveis de significância de acordo com o p-value.
# Quanto mais estrelas, maior a significância.
# Atenção --> Muitos astericos indicam que é improvável que não exista relacionamento entre as variáveis.

# Valor t
# Define se coeficiente da variável é significativo ou não para o modelo. 
# Ele é usado para calcular o p-value e os níveis de significância.

# p-value
# O p-value representa a probabilidade que a variável não seja relevante. 
# Deve ser o menor valor possível. Se este valor for realmente pequeno, o R irá mostrar o valor como notação científica

# Significância
# São aquelas legendas próximas as suas variáveis
# Espaço em branco - ruim
# Pontos - razoável
# Asteriscos - bom
# Muitos asteriscos - muito bom

# Residual Standar Error
# Este valor representa o desvio padrão dos resíduos

# Degrees of Freedom
# É a diferença entre o número de observações na amostra de treinamento e o número de variáveis no seu modelo

# R-squared
# Ajuda a avaliar o nível de precisão do nosso modelo. Quanto maior, melhor, sendo 1 o valor ideal.

# F-statistics
# É o teste F do modelo. Esse teste obtém os parâmetros do nosso modelo e compara com um modelo que tenha menos parâmetros
# Em teoria, um modelo com mais parâmetros tem um desempenho melhor. Se o seu modelo com mais parâmetros NÃO tiver perfomance
# melhor que um modelo com menos parâmetros, o valor do p-value será bem alto. Se o modelo com mais parâmetros tem performance
# meljor que um modelo com menos parâmetros, o valor do p-value será mais baixo.

# Lembre que correlação não implica causalidade


# Visualizando o Modelo e Fazendo Previsões

# Obtendo os resíduos
res <- residuals(modelo_v1)

# Convertendo o objeto para um dataframe
res <- as.data.frame(res)
head(res)

# Histograma dos resíduos
ggplot(res, aes(res)) +  
  geom_histogram(fill = 'blue', 
                 alpha = 0.5, 
                 binwidth = 1)

# Plot do Modelo
# plot(modelo_v1)

# Fazendo as predições
modelo_v1 <- lm(G3 ~ ., treino)
prevendo_G3 <- predict(modelo_v1, teste)

prevendo_G3

# Visualizando os valores previstos e observados
resultados <- cbind(prevendo_G3, teste$G3) 
colnames(resultados) <- c('Previsto','Real')
resultados <- as.data.frame(resultados)
resultados
min(resultados)

#Breve introdução ao shiny
#Big Data na Prática
#Web Scraping

# Pacote rvest - Ãºtil para quem nÃ£o conhece HTML e CSS
#install.packages('rvest')
library(xml2)
library(rvest)

# Coletando a classificaÃ§Ã£o do filme
?read_html
?html_node
?html_text


# Formatando os dados de uma pÃ¡gina web
library(rvest)
library(stringr)
library(tidyr)
library(tm)
library(SnowballC)
library(wordcloud)
library(RColorBrewer)


# Extraindo a pÃ¡gina web
url <- ("https://www.tripadvisor.com.br/Attraction_Review-g775227-d2389005-Reviews-Jolimont_Winery-Canela_State_of_Rio_Grande_do_Sul.html")
pagina <- read_html(url)


# Extraindo conteúdo tag do cÃ³digo HTML e convertendo para dataframe
titulo <- html_node(pagina, 'title')
descricao <-  html_nodes(pagina, 'meta')
descricao1 <- html_attr(descricao, 'content')
h <- html_nodes(pagina, 'h1,h2,h3,h4,h5,h6')
paragrafo <- html_nodes(pagina, 'p')
#review <- html_nodes(pagina, "div")
descricao1

texto <- html_text(paragrafo)
texto1 <- html_text(titulo)
texto2 <- html_text(h)
texto3 <- descricao1[5]
#texto4 <- html_text(review)

#pagina %>% 
#  html_nodes(xpath = '//*[@id="UR499903032"]') %>%
#  xml_attr("text")

#//*[@id="UR499903032"]/div[2]/div/div[1]/text()

# Carregando os dados como Corpus
docs <- Corpus(VectorSource(c(texto,texto1,texto2,texto3)))

# PrÃ©-processamento
inspect(docs)
toSpace <- content_transformer(function (docs , pattern ) gsub(pattern, " ", docs))
docs <- tm_map(docs, toSpace, "/")
docs <- tm_map(docs, toSpace, "@")
docs <- tm_map(docs, toSpace, "\\|")

# Converte o texto para minÃºsculo
docs <- tm_map(docs, content_transformer(tolower))

# Remove nÃºmeros
docs <- tm_map(docs, removeNumbers)

# Remove as palavras mais comuns do idioma inglÃªs
docs <- tm_map(docs, removeWords, stopwords("portuguese"))

# VocÃª pode definir um vetor de palavras (stopwords) a serem removidas do texto
#docs <- tm_map(docs, removeWords, c("blabla1", "blabla2")) 

# Remove pontuaÃ§Ã£o
docs <- tm_map(docs, removePunctuation)

# Elimina espaÃ§os extras
docs <- tm_map(docs, stripWhitespace)

# Text stemming
docs <- tm_map(docs, stemDocument)


dtm <- TermDocumentMatrix(docs)
m <- as.matrix(dtm)
v <- sort(rowSums(m),decreasing=TRUE)
d <- data.frame(word = names(v),freq=v)
head(d, 15)

# wordcloud
set.seed(1234)
wordcloud(words = d$word, freq = d$freq, min.freq = 4,
          max.words=200, random.order=FALSE, rot.per=0.35, 
          colors=brewer.pal(8, "Dark2"))


# Tabela de frequÃªncia
findFreqTerms(dtm, lowfreq = 4)
findAssocs(dtm, terms = "freedom", corlimit = 0.3)
head(d, 15)

# GrÃ¡ficos de barras com as palavras mais frequentes
barplot(d[1:15,]$freq, las = 2, names.arg = d[1:15,]$word,
        col ="lightblue", main ="Palavras com maior frequência",
        ylab = "Frequência das Palavras")





# Grava o resultado no arquivo csv
write.csv(tab, 'superbowl.csv', row.names = F)

#Text Mining
#Nuvem de Palavras
#Análise de Redes Sociais - Twitter
