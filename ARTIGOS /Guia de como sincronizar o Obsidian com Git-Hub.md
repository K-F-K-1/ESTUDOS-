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

Agora nas configurações: 
- Ponha o nome do seu token 
- Em **"Expiration"** marque **"No expiration"** 
- Em **"Scopes"** marque toda a caixa **"Repo"**
- Clique em "Generate token"
### Atenção
- Copie e salve seu token **IMEDIATAMENTE**, aós fechar essa pagina, você nunca mais vai ve-lo.
- Ele começa "com **"ghp_"**
## 2. Preparando o terminal 
Agora no seu terminal, vamos garantir que o Git salve suas credenciais pra sempre. Digite no seu terminal isso:

```
git config --global credential.helper store
```

Agora configure seu username e email, ambos os mesmos que você usa no Git-Hub


```
git config --global user.name "Seu Nome"
git config --global user.email "seu@email.com"
```

Agora no Obsidian crie uma pasta no seu Vault, é dentro dessa pasta que vamos clonar o repositório, no meu caso criei a pasta GIT-HUB no meu Obsidian. Para fazer isso no terminal digite: 


```
cd ~/Documentos/Obsidian
mkdir -p GIT-HUB

```

Ou crie ela no próprio Obsidian.
Em seguida, pegue a URL do seu repositório e a use com o comando **"git clone (...) .git"**

Exemplo:


```
cd GIT-HUB
git clone https://github.com/SEU_USUARIO/SEU_REPOSITÓRIO.git .

```

- Não esqueça do **espaço+ponto final**, sem ele o comando não funciona corretamente 