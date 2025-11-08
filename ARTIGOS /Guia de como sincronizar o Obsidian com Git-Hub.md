Este guia mostra como sincronizar uma pasta do seu Vault do Obsidian com um repositório seu no Git-Hub, de forma que você possa editar suas notas e pastas como bem entender e fazer commit e push delas de maneira fácil e prática direto para o seu repositório! 

### Atenção 
- O público alvo deste estudo são usuários de Arch Linux, distros variantes e publico geral do Linux. Nada de windows aqui!
- Estou considerando que você já tem o Git na sua máquina e ele já contém suas credenciais e está configurado 
## 1. Criar o seu repositório 
Primeiro crie um novo repositório do 0 no Git-Hub, ponha um nome legal nele. Não confirme  as opções:
- Add README
- Add .gitigonore
- Add license

![](screenshot-2025-11-08-112851.jpeg)

Deixe exatamente como está na imagem acima.

Você pode se perguntar " Por que isso ?" e eu te digo: e para evitar conflito de históricos diferentes quando você der seu primeiro Push no Obsidian. Se  trata deste erro: 
```
Refusing to merge unrelated histories

```
## 2. Gerar Token de acesso

Esse passo é importante, atenção. 
No Git-Hub abra suas configurações. Vá na última opção que existe no menu lateral esquerdo **"Developer settings"**

![](screenshot-2025-11-08-115734.jpeg)

Depois em **"Personal access tokens "** e em seguida em **"Tokens classic"**

![](screenshot-2025-11-08-121335.jpeg)

Agora em **"Generate new token"** e em seguida em **"Gnerate new token (classic)"**
![](screenshot-2025-11-08-121709.jpeg)
