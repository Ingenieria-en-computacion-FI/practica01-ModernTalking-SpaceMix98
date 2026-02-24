 Entre a[0] y a[3] hay 3 posiciones. 
5012 - 500 = 12 bytes. 
12 𝑏𝑦𝑡𝑒𝑠
3 𝑒𝑙𝑒𝑚𝑒𝑛𝑡𝑜𝑠
= 4 𝑏𝑦𝑡𝑒𝑠 𝑝𝑜𝑟 𝑒𝑙𝑒𝑚𝑒𝑛𝑡𝑜
Como su tamaño es de 4 bytes, se trata de un int. 
&𝑎[5] = 5000 + (5 · 4)
&𝑎[5] = 5000 + 20
&𝑎[5] = 5000 + 5020
La fórmula general que rige este comportamiento y que permitió obtener los resultados 
anteriores es: &a[i] = 5000 + (i * 4).
