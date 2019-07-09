class KMP{
  void KMPSearch(String pat,String txt){
      int N = pat.length();
      int M = txt.length();
      int lps[]=new int[M];
      int j = 0;
      computelps(pat,M,lps);
    
    
    
    }

void computelps(String pat,int M,int lps[]){
  int len=0;
  int i=1;
  lps[0]=0;
  while(i<M){
      if(pat.charAt(i) == txt.charAt(len)){
          len++;
          lps[i]=len;
          i++;
      }else{
          if(len !=0){
              len=lps[len- 1];
          }else{
              lps[i]=len;
              i++;
          }
      }
  }


}

public static void main(String args[]){
    String txt="OSAOSAOSAOSAOSAOSANDALELUM";
    String pat="OSA";
    new KMP().KMPSearch(pat, txt);
}
}