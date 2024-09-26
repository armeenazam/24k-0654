#include<stdio.h>
int main()
{
    char coffee, cup;
    int time=0;
    float d_time;
    printf("Enter type of coffee\n B for black and W for white : ");
    scanf(" %c",&coffee);
    
    switch(coffee)
    {
        case 'B':
        	
	        printf("\nAdd pure water (time=20min)");
	        time=time+20;
	        printf("\nAdd sugar (time=20min)");
	        time=time+20;
	        printf("\nMix well (time=25min)");
	        time=time+25;
	        printf("\nAdd coffee (time=15min)");
	        time=time+15;
	        printf("\nMix well (time=25min)");
	        time=time+25;
	        
	        
	        printf("\nEnter cup size\n S for single and D for double : ");
    		scanf(" %c",&cup);
        	switch(cup)
		    {
		        case 'S':
		        printf("\nTIME TAKEN TO PREPARE COFFEE IS %d minutes",time);
		        break;
		        case 'D':
		        d_time=time+(time*0.5);
		        printf("\nTIME TAKEN TO PREPARE COFFEE IS %f minutes",d_time);
		        break;
		       
		        default:
		        printf("\nInvalid cup size");
		       
		    }
		    break;
		    
	        	
		    
	    case 'W':
	    
	        printf("\nAdd pure water (time=15min)");
	        time=time+15;
	        printf("\nAdd sugar (time=15min)");
	        time=time+15;
	        printf("\nMix well (time=20min)");
	        time=time+20;
	        printf("\nAdd coffee (time=2min)");
	        time=time+2;
	        printf("\nAdd milk (time=4min)");
	        time=time+4;
	        printf("\nMix well (time=20min)");
	        time=time+20;
	        
	        
	        printf("\nEnter cup size\n S for single and D for double : ");
    		scanf(" %c",&cup);
        	switch(cup)
		    {
		        case 'S':
		        printf("\nTIME TAKEN TO PREPARE COFFEE IS %d minutes",time);
		        break;
		        case 'D':
		        d_time=time+(time*0.5);
		        printf("\nTIME TAKEN TO PREPARE COFFEE IS %f minutes",d_time);
		        break;
		        
		        default:
		        printf("\nInvalid cup size");
		       
		    }
		    break;
	        
        default:
        	printf("\nInvalid coffee type");
    }
        	
       

    
    
    return 0;

}
