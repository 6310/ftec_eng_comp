install.packages("twitteR")
install.packages("ROAuth")
install.packages("bitops")
install.packages("RCurl")
library(twitteR)
library(ROAuth)
library(bitops)
library(RCurl)
setup_twitter_oauth(consumer_key = 	'N0rtUhxBfeguFyo2vfaHW59t5', 
                    consumer_secret = '16E5MlFKi2TxFPuLh9oyPAmqjjQYU2JYs4u5H9QSlOGrxt74Pp', 
                    access_token = 	'1692064994-cRPx2PzFJQn6lDcyq6ytOp9I09EPNlwgz3noHdl', 
                    access_secret = 	'keDVIf9CKui8dx2ge1ZCA7ylKae4aphydnvaOxH99EHrQ')

#s <- searchTwitter("globo", n=50, lang="pt", since='2016-07-01')

# Capturando os tweets
tweetdata = searchTwitter("#BigData", n = 100)
# 1 tempo 13 tweets
# 2 tempo 16 tweets
# total jogo 29
(tweets <- userTimeline('ECJuventude', n=29))

library(stringr)

#df <- do.call("rbind", lapply(tweets, as.data.frame))
#tweets <- VectorSource(df$text)
tweets.text <- sapply(tweets, function(x) x$getText())
tweets.text <- str_replace_all(tweets.text, '[^[:graph:]]',' ')

library(NLP)
library(tm)

#alternativa do livro
#corpus <- Corpus(tweets)
tweets.corpus <- Corpus(VectorSource(tweets.text))

#iconv(tweets.corpus, from="UTF-8", to="latin1")

#(latin <- content_transformer(function(x) iconv(x, to = "Latin1", sub = "byte")))
#tweets.corpus <- tm_map(tweets.corpus, latin)


tweets.corpus_FI <- tm_map(tweets.corpus,content_transformer(tolower))
tweets.corpus_FI <- tm_map(tweets.corpus_FI,removePunctuation)
tweets.corpus_FI <- tm_map(tweets.corpus_FI, stripWhitespace)
tweets.corpus_FI <- tm_map(tweets.corpus_FI,removeNumbers)
tweets.corpus_FI <- tm_map(tweets.corpus_FI,removeWords,stopwords("portuguese"))
#tweets.corpus_FI_3 <- tm_map(tweets.corpus_FI,stemDocument)
tweets.corpus_tf <- TermDocumentMatrix(tweets.corpus_FI, control = list(minWordLenght = 10, minDocFreq = 100))

m <- as.matrix(tweets.corpus_tf)
v <- sort(rowSums(m), decreasing = TRUE)
library(RColorBrewer)
library(wordcloud)
wordcloud(names(v),v,min.freq = 1)

#alternativa da internet (http://www.kleinkauff.com/r-nuvem-de-palavras/)
#vectorsource: interpreta cada elemento do objeto, nesse caso a lista, como um documento
tweets.corpus <- Corpus(VectorSource(tweets.text))
#a cultura varia conforme o usu?rio que estiver analisando. Outro input poderia ser 'pt-BR'
tweets.stopwords <- stopwords('pt-BR')
#remover pontua??o
tweets.corpus <- tm_map(tweets.corpus, removePunctuation)
#remover espa?os desnecess?rios entre palavras
tweets.corpus <- tm_map(tweets.corpus, stripWhitespace)
#transforma todas a letras para lower case
tweets.corpus <- tm_map(tweets.corpus, content_transformer(tolower))
#remove stopwords
tweets.corpus <- tm_map(tweets.corpus, function(x) removeWords(x, tweets.stopwords))

#segunda parte internet
#cria document matrix
tweets.dtm <- DocumentTermMatrix(tweets.corpus)
#cria matrix
tweets.dtm.matrix <- as.matrix(tweets.dtm)
#soma a frequencia de cada termo
tweets.dtm.matrix.frequency <- colSums(tweets.dtm.matrix)
#ordena pelas palavras com maior frequencia
tweets.dtm.matrix.frequency <- sort(tweets.dtm.matrix.frequency, decreasing = TRUE)
#retira apenas os termos, em ordem decrescente
tweets.dtm.matrix.frequency.names <- names(tweets.dtm.matrix.frequency)

#terceira parte
#configuar paleta de cores
#pal <- brewer.pal(5, 'Set3')
pal2 <- brewer.pal(8,"Dark2")
wordcloud(tweets.dtm.matrix.frequency.names,
          tweets.dtm.matrix.frequency, 
          scale=c(6,.2),
          min.freq=3,
         max.words=Inf, 
         random.order=FALSE, 
         rot.per=.13, colors=pal2)
#wordcloud(tweets.dtm.matrix.frequency.names, 
#         min.freq = 30, 
#         scale = c(5,1), 
#         random.color = F, 
#         max.word = 60, 
#         random.order = F,
#         colors = pal2)

#alternativa de nuvem
#wordcloud(tweets.dtm.matrix.frequency.names,tweets.dtm.matrix.frequency, min.freq = 607)
          




