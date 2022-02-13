#include<stdio.h>
/*  
      1. Inches to CM's
      2. Pound to KGs
      3. KM's to miles
      4. inches to foot
      5. inches to meters 
      6. Faharanite to centigrade
      
      7. CM's to inches
      8. KG's to pound 
      9. Miles to KM's 
      10. Foot to inches 
      11. Meters to inches 
      12. Centigrade to faharanite 
*/

/* Making Functions*/

int inches_to_cm(){
  int num1;
  float result1;
  printf("Enter the number you want to convert from inches to cm's: ");
  scanf("%d",&num1);
  result1 = (float) num1*(2.54);
  printf("the value is %0.2f \n",result1);
  return 0;
}

int pounds_to_kgs(){
  int num2;
  float result2;
  printf("Enter the number you want to convert from pounds to kg's: ");
  scanf("%d",&num2);
  result2 = (float) num2/(2.205);
  printf("the value is %0.2f \n", result2);
  return 0;
}

int kms_to_miles(){
  int num3;
  float result3;
  printf("Enter the number you want to convert from kms to miles: ");
  scanf("%d", &num3);
  result3 = (float) num3/(1.609);
  printf("the value is %0.2f \n", result3);
}

int inches_to_foot(){
  int num4;
  float result4;
  printf("Enter the number you want to convert from inches to foot: ");
  scanf("%d", &num4);
  result4 = (float) num4/(12);
  printf("the value is %0.2f \n", result4);
}

int inches_to_meters(){
  int num5;
  float result5;
  printf("Enter the number you want to convert from inches to meters: ");
  scanf("%d",&num5);
  result5 = (float) num5/(39.37);
  printf("the value is %0.2f \n", result5);
}

int fahr_to_centigrade(){
  int num6;
  float result6;
  printf("Enter the number you want to convert from fahrenheit to centigrade: ");
  scanf("%d",&num6);
  result6 = (float) (num6-32)*(0.555);
  printf("the value is %0.2f \n", result6); 
}

int cms_to_inches(){
  int num7;
  float result7;
  printf("Enter the number you want to convert from cms to inches: ");
  scanf("%d", &num7);
  result7 = (float) (num7)/(2.54);
  printf("the value is %0.2f \n", result7);
}

int kg_to_pounds(){
  int num8;
  float result8;
  printf("Enter the number you want to convert from KG's to pounds: ");
  scanf("%d",&num8);
  result8 = (float) (num8)*(2.205);
  printf("the value is %0.2f \n", result8);
}

int miles_to_kms(){
  int num9;
  float result9;
  printf("Enter the number you want to conver from miles to kms: ");
  scanf("%d", &num9);
  result9 = (float) (num9)*(1.609);
  printf("the value is %0.2f \n", result9); 
}

int foot_to_incles(){
  int num10;
  float result10;
  printf("Enter the number you want to convert from foot to inches: ");
  scanf("%d", &num10);
  result10 = (float) num10*(12);
  printf("the value is %0.2f \n", result10);
}

int meters_to_inches(){
  int num11;
  float result11;
  printf("Ener the number you want to convert from meters to inches: ");
  scanf("%d", &num11);
  result11 = (float) num11*(39.37);
  printf("the value is %0.2f \n", result11);
}

int centigrate_to_faharanite(){
  int num12; 
  float result12;
  printf("Enter the number you want to convert from centigrade to faharanite: ");
  scanf("%d", &num12);
  result12 = (float) num12*(1.8)+32;
  printf("the value is %0.2f \n", result12);
}

/* Main Program */ 

int main()
{
    int choice;
    printf("\n1. Inches to CM's\n2. Pounds to KG's \n3. KM's to miles \n4. Inches to foot \n5. Inches to meters \n6. Faharanite to Centigrade \n7. CM's to inches \n8. KG's to pounds \n9. Miles to KM's \n10. Foot to inches \n11. Meters to Inches \n12. Centigrade to Faharanite) \nEnter your choice: ");
    scanf("%d", &choice);
  
 /* Declaring Choices */
      
  if (choice==1){
      inches_to_cm();
    }
  if (choice==2){
    pounds_to_kgs();
  }
  if (choice==3){
    kms_to_miles();
  }
  if (choice==4){
    inches_to_foot();
  }
  if (choice==5){
    inches_to_meters();
  }
  if (choice==6){
    fahr_to_centigrade();
  }
  if (choice==7){
    cms_to_inches();
  }
  if (choice==8){
    kg_to_pounds();
  }
  if (choice==9){
    miles_to_kms();
  }
  if (choice==10){
    foot_to_incles();
  }
  if (choice==11){
    meters_to_inches();
  }
  if (choice==12){
    centigrate_to_faharanite();
  }
  else{
      printf("Incorrect Choice\n ");
  }
  return 0;
}
