#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <string.h>
int m,a,s;
void main_menu();
void login();
void admin();
void add_student();
void view_student();
void update_student();
void delete_student();
void student ();
char f[][150],l[][150];
int states[10];
int x=1;
int main ()
{
	main_menu();
}

void main_menu(){
	system ("cls");
	login();
	if (m==1){
		admin();		
	}
	else if (m==2){
		student();
	}
	else if (m==3){
		system ("cls");
		printf ("Quitting the program...\nThanks for using it!");	
		exit(0);
	}
	getch();
}

void login (){
	printf ("Hi, would you like to login as:\n 1. Admin\n 2. Student\n 3. Exit\nEnter your choice:");
	scanf ("%d",&m);
}

void admin (){
	system ("cls");
	printf ("||Logged in as an admin||\n 1. Add Student Record\n 2. View all Students Records\n 3. Update Student Record\n 4. Delete Student Record\n 5. Main Menu\n 6. Exit\nEnter number of your choice:");
	scanf ("%d",&a);
	if (a==1){
		add_student();	
		}
		else if (a==2){
		view_student();	
		}
		else if (a==3){
		update_student();
		}
		else if (a==4){
		system ("cls");
		delete_student();
		}
		else if (a==5){
		main_menu();	
		}
		else if (a==6){
		system ("cls");
		exit(0);
		}
	
	
}

void add_student(){
	system ("cls");
	printf ("Enter First Name: \n");
	scanf ("%s",f[x]);
	printf ("Enter Last Name: \n");
	scanf ("%s",l[x]);
	states [x]=1;
	x++;
	admin();	
}

void view_student(){
	int w=1,i,z;
	system ("cls");
	printf ("Student Number  ||   Student Name \n");
	for (i=1;i<x;i++){
	if (states[i]==1){
	printf ("%d                    %s %s \n",w++,f[i],l[i]);	
	}
	} 
	printf ("\n1. Admin Menu\n2. Exit\nEnter your choice:");
	scanf ("%d",&z);
	if (z==1){
		admin();
	}
	else if (z==2){
		exit(0);
	}
}
void update_student(){
	int n;
	system ("cls");
	printf ("Enter Student Number:\n");
	scanf("%d",&n);
	printf ("Update First Name:\n");
	scanf ("%s",f[n]);
	printf ("Update Last Name:\n");
	scanf ("%s",l[n]);
	admin();
}

void delete_student(){
	int n;
	system ("cls");
	printf ("Enter Student Number:\n");
	scanf ("%d",&n);
	states [n]=0;
	admin ();
	
}

void student (){
	system ("cls");
	printf ("||Logged in as a student||\n 1. Main Menu\n 2. Exit\nEnter your choice:");
	scanf ("%d",&s);
	system ("cls");
	if (s==1){
		main_menu();
	}
	else {
		exit(0);	
	}
}
