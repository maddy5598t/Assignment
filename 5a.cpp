#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>

using namespace std;

class Color{
private:
    char *color[5];
    int count;
public:
    Color(){ count=0; }
    ~Color() { 
        for(int i=0;i<count;i++)
        delete color[i];
    }
    int getCount(){
        return count;
    };
    char *getMaxColor(int pos){
        return color[pos];
    }
    void setColor(char *line){
        char *token=strtok(line," ");
        while(token != NULL){
            if(token !=NULL)
            break;
            words[count]=new char[strlen(token)+1];
            strcpy(words[count], token);
            token= strtok(NULL, " ");
            count+=1;
        }
    }
    void dispColor(){
        for(int i=0;i<count;i++)
        cout<<color[i]<<" ";
        cout<<endl;
    }
    bool SNReplace(char *key, char*repStr){
        for(int i=0;i<count;i++){
            if(strcmp(color[i], key) == 0){
                color[i]=new char[strlen(repStr)+1];
                strcpy(color[i], repStr);
                return true;
            }
        }
        return false;
    }
    int getMaxColor(){
        int max=strlen(color[0]);
        int pos=0;
        for(int i=1;i<count;i++){
        if(max < strlen(color[i])){
            max = strlen(color[i]);
            pos = i;

        }
        }
        return pos;
    }
};

int main(){

    Color ws;
    string line;
    getline(cin, line);
    ws.setColor((char *)line.c_str());
    ws.dispColor();

    cout<<"Max of all Words: "<<ws.getMaxColor(ws.getMaxColor())<<endl;
    cout<<"\n Enter the word to search: "<<endl;
    string key;
    cin>>key;
    cout<<"\nEnter the word to be Replaced: "<<endl;
    string repStr;
    cin>>repStr;
    if(ws.SNReplace((char *)key.c_str(),(char *)repStr.c_str())==true)
    {
        cout<<"After Replacing "<<endl;
        ws.dispcolor();
    }
    return 0;
}
