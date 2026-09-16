/*
								 Author:Aarav Lakhatariya
								 Doc:11 August,2026
								 Objective:To Create a Hotel Menu
																						      */

#include<stdio.h>
#include<conio.h>
void main () {
    int choice;
    clrscr();
    printf("======================================Hotel Menu================================");
    start:
    printf("\n1------South Indian");
    printf("\n2------Gujarati");
    printf("\n3------Punjabi");
    printf("\n4------Italian");
    printf("\n5------Exit");
    printf("\nEnter the choice");
    scanf("%d",&choice);
    switch(choice){
	case 1:printf("\nYou have selected South Indian");
	       printf("\n1------Dosa");
	       printf("\n2------Idli");
	       printf("\n3------Uttappam");
               printf("\n4------Exit");
               scanf("%d",&choice);
               switch(choice){
                   case 1:printf("\nYou have selected the Dosa");
                printf("\n1------Masala Dosa--180");
                printf("\n2-----Mysore Masala Dosa--220");
                printf("\n3------Podi Dosa--290");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Masala Dosa Pay 180");
                break;
        case 2:printf("\nYou have selected Mysore Masala Dosa Pay 220");
                break;
        case 3:printf("\nYou have selected Podi Dosa Pay 290");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                          break;
                   case 2:printf("\nYou have selected the Idli");
    printf("\n1------Steam Idli--100");
    printf("\n2------Thatte Idli--130");
    printf("\n3------Kanchipuram Idli--160");
    printf("\n4------Exit");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("\nYou have selected Steam Idli Pay 100");
                break;
        case 2:printf("\nYou have selected Thatte Idli Pay 130");
                break;
        case 3:printf("\nYou have selected Kanchipuram Idli 160");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                          break;
                   case 3:printf("\nYou have selected the Uttappam");
    printf("\n1------Tomato Uttappam--120 ");
    printf("\n2------Onion Tomato Uttappam--140");
    printf("\n3------Mixed Vegetable Uttappam--170");
    printf("\n4------Exit");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("\nYou have selected Tomato Uttappam Pay 120");
                break;
        case 2:printf("\nYou have selected Onion Tomato Uttappam Pay 140");
                break;
        case 3:printf("\nYou have selected Mixed Vegetable Uttappam Pay 170");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                          break;
                   case 4:exit(0);
                   default:printf("Invalid Choice");
               }
               break;
        case 2:printf("\nYou have selected Gujarati");
                printf("\n1------Special Gujarati Thali");
                printf("\n2------Sweets and Pakwaan");
                printf("\n3------Dhaba Style Sabji-Roti");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have Special Thali--270");      
               printf("5 Sabji+12 Roti+1 Sweet+1 Pakwaan+Salad+Chaas Pay 270");
                break;
        case 2:printf("\nYou have Sweets and Pakwaan");
                printf("\n1------Gulaab Jamun(2)+Chinese Samosa(6)--100");
                printf("\n2------Khaman+Dokla+Jalebi--80(100)");
                printf("\n3------Fafda-Gathiya+Jalebi--80(100gm)");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Gulaab Jamun+Chinese Samosa Pay 100");
                break;
        case 2:printf("\nYou have selected Khaman+Dokla+Jalebi Pay 80");
                break;
        case 3:printf("\nYou have selected Fafda-Gathiya+Jalebi Pay 80");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                break;
        case 3:printf("\nYou have selected Dhaba Style Sabji-Roti");
                printf("\n1------Sev Tameta + Dokli + Rotli(5)--170");
                printf("\n2------Bateka nu Shaak + Bhakhri(4)--100");
                printf("\n3------Bengan Bharta + Bajra no Rotlo(2)--80");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Sev Tameta + Dokli + Rotli Pay 170");
                break;
        case 2:printf("\nYou have selected Bateka nu Shaak + Bhakhri Pay 100");
                break;
        case 3:printf("\nYou have selected Bengan Bharta + Bajra no Rotlo Pay 80");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
               break;
        case 3:printf("\nYou have selected Punjabi");
                printf("\n1------Punjabi Sabji");
                printf("\n2------Chole");
                printf("\n3------Lassi");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Punjabi Sabji");
                printf("\n1------Paneer Butter Masala--210");
                printf("\n2------Cheese Butter Masala--240");
                printf("\n3------Veg Toofani--250");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Paneer Butter Masala Pay 210");
                break;
        case 2:printf("\nYou have selected Cheese Butter Masala Pay 240");
                break;
        case 3:printf("\nYou have selected Veg Toofani Pay 250");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                break;
        case 2:printf("\nYou have selected Chole");
                printf("\n1------Chole Kulche(4)--230");
                printf("\n2------Chole Puri(6)--200");
                printf("\n3------Chole Bhature(5)--200");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Chole Kulche Pay 230");
                break;
        case 2:printf("\nYou have selected Chole Puri Pay 200");
                break;
        case 3:printf("\nYou have selected Chole Bhature Pay 200");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                break;
        case 3:printf("\nYou have selected Lassi");
                printf("\n1------Amritsari Lassi--110");
                printf("\n2------Pedewali Lassi--140");
                printf("\n3------Kesar Pista Lassi--150");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Gulaab Amritsari Lassi Pay 110");
                break;
        case 2:printf("\nYou have selected Pedewali Lassi Pay 140");
                break;
        case 3:printf("\nYou have selected Kesar Pista Lassi Pay 150");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
               break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
               break;
        case 4:printf("\nYou have selected Italian");
                printf("\n1------Pizzas");
                printf("\n2------Pastas");
                printf("\n3------Others");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Pizzas");
               printf("\n1-------Margerata Pizza--180");
                printf("\n2------Corn Capsicum Pizza--170");
                printf("\n3------Sev Tameta Pizza--150");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Margerata Pizza Pay 180");
                break;
        case 2:printf("\nYou have selected Corn Capsicum Pizza Pay 170");
                break;
        case 3:printf("\nYou have selected Sev Tameta Pizza Pay 150");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                break;
        case 2:printf("\nYou have selected Pastas");
                printf("\n1-------Ravioli di Magro--140");
                printf("\n2------Pesto allo Genoveso--160");
                printf("\n3------Cacio e Pepe--170");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Ravidoli di Magro Pay 140");
                break;
        case 2:printf("\nYou have selected Pesto allo Genoveso Pay 160");
                break;
        case 3:printf("\nYou have selected Cacio e Pepe Pay 170");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                break;
        case 3:printf("\nYou have selected Others");
                printf("\n1------Bruschetta al Pomodoro--210");
                printf("\n2------Capsere Salad--190");
                printf("\n3------Suppli  al Telefono--150");
                printf("\n4------Exit");
                scanf("%d",&choice);
                switch(choice){
        case 1:printf("\nYou have selected Bruschetta al Pomodoro Pay 210");
                break;
        case 2:printf("\nYou have selected Capsrese Salad Pay 190");
                break;
        case 3:printf("\nYou have selected Suppli al Telefono Pay 150");
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
                break;
        case 4:exit(0);
        default:printf("\nInvalid Choice");
               }
               break;
        case 5:exit(0);
        default:printf("\nInvalid Choice");
            }
            getch();
            goto start;
}
