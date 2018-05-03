#GRAFICOS
my_vector <- c(300,120,5,182,445)
names(my_vector) <- c("A","b","C","D","E")
my_vector
barplot(my_vector)#plota grafico de barras
barplot(my_vector,col = c(1,2,3,4,5))#com corres
barplot(my_vector,col = rgb(0.5,0.1,1,0.6,0.6),xlab = "categorias",ylab="valores",main="barplot",ylim =c(0,450))#com corres




#pie chart
slices <- c(20,12,4,16,8)
lbls <- c("as","sd","dsgf","fsd","asdf")
pie(pct,labels = lbls,main = "sdapofkapsokd")
pct <- round(slices/sum(slices)*100)

plot(pct,type="o",col="blue",ylim=c(0,35))
lines(slices,type ="o",pch=8,lty=12,col="red")
