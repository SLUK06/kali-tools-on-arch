#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int modifyPacmanConf(void){
    FILE *file = popen("sudo tee -a /etc/pacman.conf > /dev/null", "w");
    if (file == NULL) {
        perror("Error opening file /etc/pacman.conf");
        return 1;
    }

    fprintf(file, "\n[blackarch]\n");
    fprintf(file, "SigLevel = Optional TrustAll\n");
    fprintf(file, "Server = https://blackarch.org/blackarch/$repo/os/$arch\n");

    fclose(file);

    return 0;
}

int main(void) {
    modifyPacmanConf();

    int tamanho = 241;
    char *apps[241] = { "aircrack-ng", "wpscan", "nmap", "ace", "ipv6toolkit", 
                        "exploitdb", "arp-scan", "dmitry", "ike-scan", "legion", 
                        "maltego", "netdiscover", "p0f", "recon-ng", "spiderfoot", 
                        "dnsenum", "dnsmap", "dnsrecon", "dnstracer", "dnswalk", 
                        "fierce", "maltego", "spiderfoot", "twofi", "trace", "irpas", 
                        "netmask", "nbtscan", "smbmap", "smtp-user-enum", "swaks", 
                        "braa", "ssldump", "sslh", "sslscan", "tlssled", "arping", 
                        "fping", "hping3", "masscan", "unicornscan", "xprobe2", "lbd", 
                        "wafw00f", "lynis", "nikto", "dhcpig", "iaxflood", "siege", "t50", 
                        "cisco-auditing-tool", "cisco-global-exploiter", "cisco-ocs", 
                        "cisco-torch", "copy-router-config", "yersinia", "bed", "siparmyknife", 
                        "spike", "enumiax", "iaxflood", "rtpflood", "rtpinsertsound", 
                        "rtpmixsound", "sctpscan", "sipp", "burpsuite", "commix", "httrack", 
                        "paros", "skipfish", "sqlmap", "webscarab", "apache-users", "cutycapt", 
                        "dirb", "dirbuster", "uniscan", "wfuzz", "jboss-autopwn", "joomscan", 
                        "plecost", "davtest", "jsql", "padbuster", "skipfish", "whatweb", 
                        "xsser", "mdb-sql", "oscanner", "sidguesser", "sqldic", "sqlmap", 
                        "sqlninja", "tnscmd10g", "cewl", "crunch", "hashcat", "john", "medusa", 
                        "ophcrack", "rainbowcrack", "rcracki-mt", "wordlists", "hydra", 
                        "patator", "thc-pptp-bruter", "chntpw", "cmospwd", "fcrackzip", 
                        "hashid", "hash-identifier", "ophcrack", "samdump2", "sipcrack", 
                        "sucrack", "smbmap", "rsmangler", "statsgen", "chirp", "cowpatty", 
                        "fern-wifi-cracker", "kismet", "mdk3", "mfoc", "mfterm", "pixiewps", 
                        "wifite", "hackrf", "bluelog", "blueranger", "bluesnarfer", "btscanner", 
                        "redfang", "spooftooph", "mfcuk", "asleap", "cowpatty", "eapmd5pass", 
                        "wifi-honey", "bytecode-viewer", "clang", "dex2jar", "edb-debugger", 
                        "jadx", "javasnoop", "radare2", "beef", "sqlmap", "termineter", 
                        "driftnet", "ettercap-graphical", "macchanger", "mitmproxy", 
                        "netsniff-ng", "responder", "wireshark", "darkstat", "dnschef", 
                        "dsniff", "hexinject", "sslsniff", "tcpflow", "rebind", "sniffjoke", 
                        "sslsplit", "tcpreplay", "yersinia", "backdoor-factory", "nishang", 
                        "proxychains4", "weevely", "cymothoa", "sbd", "laudanum", "iodine", 
                        "miredo", "proxytunnel", "pwnat", "sslh", "stunnel4", "udptunnel", 
                        "autopsy", "binwalk", "chkrootkit", "foremost", "galleta", "hashdeep", 
                        "dc3dd", "dcfldd", "extundelete", "missidentify", "pst-utils", 
                        "reglookup", "ddrescue", "guymager", "pdfid", "pdf-parser", "foremost", 
                        "magicrescue", "pasco", "pev", "recoverjpeg", "rifiuti", "rifiuti2", 
                        "safecopy", "calpel", "scrounge-ntfs", "cutycapt", "pipal", "recordmydesktop"};

    for (int i = 0; i < tamanho; i++) {
        char command[120];
        system("sudo pacman -Syu");
        sprintf(command, "sudo pacman -S %s", apps[i]); 
        system(command);
    }

    system("clear");
    printf("\nSuccess, all tools are installed!!");

    return 0;
}