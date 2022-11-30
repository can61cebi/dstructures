#include <stdio.h>

/* BST (ikili arama agaci)
* Yeni bir arama agaci. Hizli, verimli. Verileri pointerlarla bir arada toplar.
* Aradigini yiginla veri arasindan en hizli nasil bulursun? N tane veri varsa...
*
* Orn. 20, 10, 30, 5, 50, 7, 13, 25, 35
* -> yonunde
*
* Orn. tam dolu 10 katmanli bir BST'de kac dugum vardir?
* 2^10-1
* 20 katman ise?
* 2^20-1 = 1 milyon yaklasik olarak
* 30 ise 2^30-1 = 1 milyar
*
* Time Complexity (zaman karmasikligi)
* Kilo, boy, basinc, sicaklik nasil olculur?
* Algoritmanin karmasikligi, maliyeti nasil olculur?
* 3 Tip olcum var: Beta() best, Ohm() average, O() Big O Notation biz bunu kullaniyoruz.
*
* Orn. N tane  sayiyi topla ve ortalamasini al. Bu problemi herhangi bir programlama
* dili ile cozerseniz olusacak zaman karmasikligi ne olur?
* top = 0;
* for (i = 1; i <= N; i++) {
*	scanf("%d "), &x);
*	top += x; }
* ort = top / N;
*
* Orn. n x m lik bir matrisi getmenin(goruntulemenin) maliyeti nedir?
* for (i = 0; i <= n; i++) {
*	for (j = 1; <= m; j++)	{
*		printf("%d "), A[i][j];
*		O(n*m); }
* printf("\n"); }
*
* Orn. NxNxN'lik bir dizideki sayilarin toplamini bulmak isteyelim.
* 3'lu ic ice dongunun (3 Nested Loops) zaman karmasikligi nedir?
*
* Orn. Asagidaki PSEUDO CODE icin O() nedir?
* for (i = 1; i <= N; i++) {
*	for (j = 1; j <= N; j++) {
*		...; O(N^2)
*	{
* for(i = 1; i <= N; i++) {
*	...; O(N)
* for(k = 1; k <= N; i++) {
* ...; O(N)
* } O(N^2 + N + N) = O(N^2 + 2N)
*					O(N(N + 2)) = O(N^2)
*
* Orn. O(N^3 +300N^2 + 10^9*N 10^12) // sabit sayilar onemsiz
* (N^3 + N^2 + N) // N onemsiz
* (N^2(N + 1) // sabit sayilar onemsiz.
* O(N^3)
*
* Space Complexity.
* Bellekte (RAM) olusturulan karmasiklik, maliyet olcu birimidir.
*
* Orn. int A[N]; // O(N)
*
* Orn. float A[N][N]; // O(N^2)
*
* Orn. double A[N][N][N] // O(N^3)
*
* Orn char A[N][N]
* int B[N]
* float C[N] // O(N^2 + 2N) = O(N^2)
*/