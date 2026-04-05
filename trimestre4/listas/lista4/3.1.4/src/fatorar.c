int fatorar(int i) {

   int acc = 1;

   for(; i>0; i--) {
      acc *= i;
   }
   return acc;
}