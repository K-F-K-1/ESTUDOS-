## Planejamento inicial e referências 
Neste arquivo consta meu planejamento inicial para a criação das artes do jogo Gregor Samsa Adventures. 

## Ferramentas 
- Aseprite (Testando)

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

Celeste (Melhor que achei)
