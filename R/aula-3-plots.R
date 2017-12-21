# Plots
# Graficos no R - BarPlot, Pie Chart, Line Chart, Scatter Plot, Histograma e Treemap
# http://www.r-graph-gallery.com/

?par
par()
par('pch')
par('lty')

x = 2:4
plot(x, pch = "c")

par(mfrow = c(2,2), col.axis = "red")
plot(1:8, las = 0, xlab = "xlab", ylab = "ylab", main = "LAS = 0")
plot(1:8, las = 1, xlab = "xlab", ylab = "ylab", main = "LAS = 1")
plot(1:8, las = 2, xlab = "xlab", ylab = "ylab", main = "LAS = 2")
plot(1:8, las = 3, xlab = "xlab", ylab = "ylab", main = "LAS = 3")
legend("topright", pch = 1, col = c("blue", "red"), legend = c("Var1","Var2"))


# Cores disponíveis
colors()


# Salvando os gráficos

# png
png("Grafico1.png", width = 500, height = 500, res = 72)

plot(iris$Sepal.Length, iris$Petal.Length,
     col = iris$Species,
     main = "Gráfico gerado a partir do Iris")

dev.off()


# pdf
pdf("Grafico2.pdf")

plot(iris$Sepal.Length, iris$Petal.Length,
     col = iris$Species,
     main = "Gráfico gerado a partir do Iris")

dev.off()


#(Mapas e googleVis)

# ggmap
install.packages("ggmap")
install.packages("mapproj")
library(ggmap)
library(mapproj)
map1 <- get_map(location = 'Brazil', zoom = 4)
map2 <- get_map(location = 'Europe', zoom = 4)
ggmap(map1)
ggmap(map2)
?get_map
?ggmap
options(warn=-1)

qmap('Recife')
qmap('L69 3GP', zoom = 16)
qmap('L69 3GP', zoom = 16, maptype = 'satellite')


# Estádio Olímpico de Londres
mapImageData1 <- get_map(location = c(lon = -0.016179, lat = 51.538525),
                         color = "color",
                         source = "google",
                         maptype = "satellite",
                         zoom = 17)

ggmap(mapImageData1,
      extent = "device",
      ylab = "Latitude",
      xlab = "Longitude")


mapImageData2 <- get_map(location = c(lon = -0.016179, lat = 51.538525),
                         color = "color",
                         source = "google",
                         maptype = "hybrid",
                         zoom = 15)

ggmap(mapImageData2,
      extent = "device",
      ylab = "Latitude",
      xlab = "Longitude")


# Maps
install.packages("mapdata")
install.packages("maps")
library(maps)
library(mapdata)

map("worldHires","Canada",
    xlim=c(-141,-53),
    ylim=c(40,85),
    col="gray90",
    fill=TRUE)


?map
help(package='maps')


# Gráficos de Rede, interativos
install.packages("networkD3")
library(networkD3)

data(MisLinks, MisNodes)
forceNetwork(Links = MisLinks, Nodes = MisNodes, Source = "source",
             Target = "target", Value = "value", NodeID = "name",
             Group = "group", opacity = 0.4)

?networkD3

library(networkD3)

# Criando dados
src <- c("A", "A", "A", "A",
         "B", "B", "C", "C", "D")
target <- c("B", "C", "D", "J",
            "E", "F", "G", "H", "I")
networkData <- data.frame(src, target)

# Plot
simpleNetwork(networkData)


# Heatmap
install.packages("heatmaply")
library(heatmaply)
heatmaply(mtcars, k_col = 2, k_row = 3) %>% layout(margin = list(l = 130, b = 40))


# Gráfico Interativo
install.packages("dygraphs")
library(dygraphs)

dygraph(nhtemp, main = "Temperaturas") %>%
  dyRangeSelector(dateWindow = c("1920-01-01", "1960-01-01"))


# rMaps 
# http://rmaps.github.io

install.packages("googleVis")
library(googleVis)
?googleVis


# Criando um Datafrane
df = data.frame(País = c("BR", "CH", "AR"), 
                Exportações = c(10,13,14), 
                Importações = c(23,12,32))


# Gráfico de Linha
Line <- gvisLineChart(df)
plot(Line)


# Gráfico de Barras
Column <- gvisColumnChart(df)
plot(Column)


# Gráfico de Barras Horizontais
Bar <- gvisBarChart(df)
plot(Bar)


# Gráfico de Pizza
Pie <- gvisPieChart(CityPopularity)
plot(Pie)


# Gráficos Combinados
Combo <- gvisComboChart(df, xvar = "País",
                        yvar = c("Exportações", "Importações"),
                        options = list(seriesType = "bars",
                                       series='{1: {type:"line"}}'))
plot(Combo)


# Scatter Chart
Scatter <- gvisScatterChart(women, 
                            options=list(
                              legend="none",
                              lineWidth=2, pointSize=0,
                              title="Women", vAxis="{title:'weight (lbs)'}",
                              hAxis="{title:'height (in)'}", 
                              width=300, height=300))
plot(Scatter)


# Bubble
Bubble <- gvisBubbleChart(Fruits, idvar="Fruit", 
                          xvar="Sales", yvar="Expenses",
                          colorvar="Year", sizevar="Profit",
                          options=list(
                            hAxis='{minValue:75, maxValue:125}'))
plot(Bubble)


# Customizando
M <- matrix(nrow=6,ncol=6)
M[col(M)==row(M)] <- 1:6
dat <- data.frame(X=1:6, M)
SC <- gvisScatterChart(dat, 
                       options=list(
                         title="Customizing points",
                         legend="right",
                         pointSize=30,
                         series="{
                         0: { pointShape: 'circle' },
                         1: { pointShape: 'triangle' },
                         2: { pointShape: 'square' },
                         3: { pointShape: 'diamond' },
                         4: { pointShape: 'star' },
                         5: { pointShape: 'polygon' }
                         }"))
plot(SC)


# Gauge
Gauge <- gvisGauge(CityPopularity, 
                   options=list(min=0, max=800, greenFrom=500,
                                greenTo=800, yellowFrom=300, yellowTo=500,
                                redFrom=0, redTo=300, width=400, height=300))
plot(Gauge)


# Mapas
Intensity <- gvisIntensityMap(df)
plot(Intensity)


# Geo Chart
Geo=gvisGeoChart(Exports, locationvar="Country", 
                 colorvar="Profit",
                 options=list(projection="kavrayskiy-vii"))
plot(Geo)


# Google Maps
AndrewMap <- gvisMap(Andrew, "LatLong" , "Tip", 
                     options=list(showTip=TRUE, 
                                  showLine=TRUE, 
                                  enableScrollWheel=TRUE,
                                  mapType='terrain', 
                                  useMapTypeControl=TRUE))
plot(AndrewMap)


# Dados em Gráfico. Nível de analfabetismo nos EUA
require(datasets)
states <- data.frame(state.name, state.x77)
GeoStates <- gvisGeoChart(states, "state.name", "Illiteracy",
                          options=list(region="US", 
                                       displayMode="regions", 
                                       resolution="provinces",
                                       width=600, height=400))
plot(GeoStates)



# Mais exemplos
demo(googleVis)


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
        inflate.labels=F,                     
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

