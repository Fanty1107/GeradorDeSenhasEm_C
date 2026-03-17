## 🛠️ Como Compilar e Rodar o Projeto

Este projeto foi escrito em C Padrão (Standard C) e pode ser compilado em qualquer sistema operacional (Windows, Linux ou macOS).

### Pré-requisitos ###
Você precisará de um compilador C instalado na sua máquina:
* **Windows:** Recomendado usar o [MinGW (GCC para Windows)](https://www.mingw-w64.org/downloads/) ou o compilador do Visual Studio.
* **Linux:** O `gcc` geralmente já vem instalado. Se não, instale via terminal (ex: `sudo apt install build-essential`).
* **macOS:** O `clang` vem embutido nas ferramentas de desenvolvedor da Apple. Instale rodando `xcode-select --install` no terminal.

### Passo a passo para compilar via Terminal

1. Faça o clone deste repositório ou baixe os arquivos fonte (`main.c`, `func.c` e `func.h`).
2. Abra o terminal na pasta onde os arquivos foram salvos.
3. Como o projeto é dividido em múltiplos arquivos, você precisa compilar o `main.c` e o `func.c` juntos. Execute o comando abaixo dependendo do seu compilador:

**Usando GCC (Linux / Windows MinGW):**
```bash
gcc main.c gerador.c -o gerador_de_senhas
