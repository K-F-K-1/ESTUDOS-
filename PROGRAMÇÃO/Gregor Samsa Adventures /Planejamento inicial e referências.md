## Planejamento inicial e referências 
Neste arquivo consta meu planejamento inicial para a criação das artes do jogo Gregor Samsa Adventures. 

## Ferramentas 
- Aseprite (Inicial)
- Grid Sheet(Depois)

## Definições técnicas 
É necessário definir:

- **Resolução interna:** Quantos px o game atualmente  renderiza internamente ?
- <font color="#00b050">R: </font>640 x 480 px 
- **Definir tamanho do tile e dos sprites:** Isso é necessário para mais conforto programando hit-boxes e melhor relação proporcional entre objetos. 
- **Formato:** O ray-lib aseprite permite desenhar as coisas no aseprite e já mandar pra branch

## Tamanho do canvas interno 
- Imagino que o jogo deva rodar em fullscreen
- Para isso, é preciso estudar e aplicar funções do raylib como o RenderTexture 2D que permitem um reescale perfeito para que os gráficos rodem de maneira lisa e sem esticar.
- A resolução mais maneira nesse caso seria **480x270** ,pois 480x270 vezes 4= 1920x1080, proporcional e sem distorção. 
- Sprites = 32x32, Tile(Chão) 16x16 

## Referências

### Celeste (Melhor que achei)
![](https://i.pinimg.com/1200x/52/de/77/52de771aa173ab1593076e690882f57c.jpg)

![](https://i.pinimg.com/1200x/32/db/c3/32dbc36000cf54303cde2e3b8f07da99.jpg)
- O Background de jogos de plataforma é muito importante, é a qualidade dele que define a qualidade da arte do Jogo 
- Celeste é inteligente em não usar contornos no background, a escolha por só usar luz e sombra deixa o visual mais clean e natural
- É preciso observar sutis animações nos objetos de fundo, as animações discretas transmitem a sensação de um mundo vivo
- Celeste muda bastante de paleta de cores pelo visto, e são cores geralmente saturadas, a variação de paletas da a sensação de jornada. Se for a mensagem de GSA, esse recurso de mudar a paleta de cores é indispensável. 

MAPAS
- Oceano azul - Mob do peixe espada  
- Água doce (Esverdeado) - Mob Gaivota - Pode subir até a superfíce , mas se chegar na borda instakill da gaivota - No final tem o barco
- Nazare segue o Gregor no ínicio e tem um confronto no barco, Nazaré é tímida e joga tinta no Gregor na batalha 

Interior do Barco dodói
- Mapa fechado 
- Barco tamanho normal 


MAPA FINAL UFPA
- Maciota vai tentar impedir que Gregor saia da água

- Só o Gregor é mudo 


