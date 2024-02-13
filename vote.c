#include<stdio.h>
struct Voter_Registration{
	int Voter_SNO;
	char Name_of_Voter[100];
	char Date_of_Birth[20];
	char Address[100];
	char Password[16];
	
};

// voter registration method/function

	void voterRegistration(){

    int n,i;
	printf("Enter the number of Voter:\n");
	scanf("%d",&n);
	struct Voter_Registration v[n];
	for(i=0;i<n;i++){
		printf("Enter the name of %d Voter:\n",i+1);
		scanf("%s",v[i].Name_of_Voter);
		printf("Enter the date of birth of %d Voter:\n",i+1);
		scanf("%s",v[i].Date_of_Birth);
		printf("Enter the address of %d Voter:\n",i+1);
		scanf("%s",v[i].Address);
		printf("Enter the password of %d Voter:\n",i+1);
		scanf("%s",v[i].Password);
	}
	FILE *fp;
	fp = fopen("voterlist.txt","w");
	if(fp==NULL){
		printf("Unable to open File");
	}
	for(i=0;i<n;i++){
		fprintf(fp,"%s\t",v[i].Name_of_Voter);
		fprintf(fp,"%s\t",v[i].Date_of_Birth);
		fprintf(fp,"%s\t",v[i].Address);
		fprintf(fp,"%s\n",v[i].Password);
		
	}
	fclose(fp);
	printf("Data has been written to the file successfully.\n");
}



int main(){


    // Voter Details Table

    int age;
    int getYear;

    printf("Enter the Year you born: ");
    scanf("%d", &getYear);

    age = 2080 - getYear;

    if (age > 18)
    {
       voterRegistration();
    }
    else
    {
        printf("You are not Eligible to vote.");
    }
    
    return 0;
}