# Kali on Arch

"Kali on Arch" is an automated script to install Kali Linux pentesting tools on Arch Linux.

## Script Summary

Modifies the /etc/pacman.conf file and adds the BlackArch repository.

Updates the system.

Installs 241 penetration testing tools such as Nmap, Aircrack-ng, Hydra, etc.

## How to Use

Clone the repository:
```shell
git clone https://github.com/SLUK06/kali-tools-on-arch.git
```
Enter the created directory:
```shell
cd kali-tools-on-arch
```

Compile the script using gcc:
```shell
gcc -o KaliOnArch KaliOnArch.c
```

Run the script:
```shell
./KaliOnArch
```



