#include <stdio.h>
#include <string.h>
# include <stdlib.h>
void help(){
    // this is help function 
    printf("Uses of termux api\n");
    printf("-h or --help for the help\n ");
     printf("For cmd list check the princekrvert github page \n ");
}
int main(int argc , char *argv[]){
    // make a function to handle the aguments 
    if (argc == 1){
        help();
    }
    else if (argc > 3){
        printf("I can't handle too many arguments ");
    }
    else if (argc == 2 ){
        // main process goes here
        if (strcmp(argv[1],"-h") == 0){
            help();
        
        }
        else if (strcmp(argv[1],"--help") == 0){
            help();
        }
        else if (strcmp(argv[1],"battery") == 0){
            system("termux-battery-status");
        }
        else if (strcmp(argv[1],"calllog") == 0){
            system("termux-call-log");
        }
        else if (strcmp(argv[1],"camera") == 0){
            system("termux-camera-info");
        }
        else if (strcmp(argv[1],"clipget") == 0){
            system("termux-clipboatd-get");
        }
        else if (strcmp(argv[1],"clipset") == 0){
            system("termux-clipboard-set");
        }
        else if (strcmp(argv[1],"contact") == 0){
            system("termux-contact-list");
        }
        else if (strcmp(argv[1],"dialog") == 0){
            system("termux-dialog");
        }
        else if (strcmp(argv[1],"download") == 0){
            system("termux-download");
        }
        else if (strcmp(argv[1],"fingerprint") == 0){
            system("termux-fingerprint");
        }
        else if (strcmp(argv[1],"location") == 0){
            system("termux-location");
        }
        else if (strcmp(argv[1],"play") == 0){
            system("termux-media-player");
        }
        else if (strcmp(argv[1],"scan") == 0){
            system("termux-media-scan");
        }
        else if (strcmp(argv[1],"record") == 0){
            system("termux-microphone-record");
        }
        else if (strcmp(argv[1],"notification") == 0){
            system("termux-notification");
        }
        else if (strcmp(argv[1],"notificationr") == 0){
            system("termux-notification-remove");
        }
        else if (strcmp(argv[1],"sensor") == 0){
            system("termux-sensor");
        }
        else if (strcmp(argv[1],"share") == 0){
            system("termux-share");
        }
        else if (strcmp(argv[1],"sms") == 0){
            system("termux-sms-list");
        }
        else if (strcmp(argv[1],"sendsms") == 0){
            system("termux-sms-send");
        }
        else if (strcmp(argv[1],"toast") == 0){
            system("termux-toast");
        }
        else if (strcmp(argv[1],"torch") == 0){
            system("termux-torch");
        }
        else if (strcmp(argv[1],"vibrate") == 0){
            system("termux-vibrate");
        }
        else if (strcmp(argv[1],"volume") == 0){
            system("termux-volume");
        }
        else if (strcmp(argv[1],"wallpaper") == 0){
            system("termux-wallpaper");
        }
        else if (strcmp(argv[1],"wifiinfo") == 0){
            system("termux-wifi-connectioninfo");
        }
        else if (strcmp(argv[1],"wifienable") == 0){
            system("termux-wifi-enable");
        }
        else{
            printf("This cmd is currently not available ");
        }
        
    }
    else if ( argc == 3){
        // some special commands 
        if (strcmp(argv[1],"torch") == 0 && strcmp(argv[2],"on") == 0){
            system("termux-torch on");
        }
        else if(strcmp(argv[1],"torch") == 0 && strcmp(argv[2],"off") == 0){
            system("termux-torch off");
        }
        else {
            printf("This command is currently not available ");
        }

    }
    else{
        printf("[!] Too many arguments ");
    }
 return 0;   
}