 for(int i=0;i<iterations;i++){
    int x= binarySearch(arr, 0 ,n-1,key);
    }
    end=clock();

    time_taken=((double)(end-start)/CLOCKS_PER_SEC);
    double avg_ms= (double)(time_taken/iterations)*1000.0;  
    printf("Time taken for n=%d is %lf ms (average per search)\n", key, avg_ms);

    free(arr);
    end= clock();

    time_taken=(double)(end-start)/CLOCKS_PER_SEC;
@@ -57,5 +64,4 @@ int main(){
    free(arr);
    return 0;
}
//10,100,1000,5000,10000,50000