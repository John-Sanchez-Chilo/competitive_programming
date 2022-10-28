int n;
    cin>>n;
    int arr[n],forw[n],back[n],i,j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        forw[i]=1;
        back[i]=1;
    }
    int maxi=0;
    for(i=n-1;i>=0;i--){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j])
                forw[i]=max(forw[i],forw[j]+1);
            if(arr[i]>arr[j])
                back[i]=max(back[i],back[j]+1);
        }           
        maxi=max(forw[i]+back[i]-1,maxi);
    }
    cout<<maxi<<endl;