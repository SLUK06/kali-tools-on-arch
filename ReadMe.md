# Kali on Arch

"Kali on Arch" is an automated script to install Kali Linux pentesting tools on Arch Linux.

## Resumo do script

Modifica o arquivo /etc/pacman.conf e adiciona o repositório do black arch;

Atualiza o sistema.

Instala 241 ferramentas de pentest como Nmap, Aircrack-ng, Hydra, etc.


## Como Usar

Clone o repositório:
```shell
git clone https://github.com/SLUK06/kali-tools-on-arch.git
```
Entre no diretório criado:
```shell
cd kali-tools-on-arch
```

Compile o script utilizando o gcc:
```shell
gcc -o KaliOnArch KaliOnArch.c
```

Execute o script:
```shell
./KaliOnArch
```



