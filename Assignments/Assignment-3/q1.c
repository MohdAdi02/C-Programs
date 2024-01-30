#include<stdio.h>
#include<math.h>
int main(){
int choice;

//do{
    printf("select a valid iption\n");
    printf("1: square\n");
    printf("2: rectangle\n");
    printf("3: circle\n");
    printf("4: trianlgle\n");
    printf("5: Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        {
            float side;
            float result;
            printf("Enter the side\n");
            scanf("%f",&side);
            result = (side * side);
            printf("arae is %.2lf",result);
        }
        break;
      case 2:
      {
            float lenght;
            float width;
            printf("Enetr the width\n");
            scanf("%f",&width);
            printf("Enter the lenght\n");
            scanf("%f",&lenght);
            printf("area is %f",lenght * width);
      }
        break;
      case 3:
      {
            float radius;
            float result;
            printf("Enter the radius:\n");
            scanf("%f",&radius);
            result = 3.14 * radius * radius;
            printf("area is %.2f",result);
      }
        break;
       case 4:
       {
            float base, height;
            printf("Enter the base and height of triangle\n");
            scanf("%f %f",&base, &height);
            printf("%f",(base * height)/2);
       }
        break;
       case 5:
       
            printf("Exit program\n");
            break;
            
            default:
                printf("invalid choice: please enter a valid choice\n");
       
    }
 //} while(choice != 5);
 
 return 0;
}