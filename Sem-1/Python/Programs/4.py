n1=int(input("ENter First Number :-"));
n2=int(input("ENter Second Number :-"));
n3=int(input("ENter THird Number :-"));

if(n1 >n2):
    if(n1>n3):
        print("Maximum :-",n1);
    else:
        print("Maximum :-",n3);
else:
    if(n2>n3):
        print("Maximum :-",n2);
    else:
        print("Maximum :-",n3);