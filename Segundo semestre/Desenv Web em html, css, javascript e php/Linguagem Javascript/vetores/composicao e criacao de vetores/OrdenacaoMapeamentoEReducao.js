const executar = () => {
  const valores = [1, 6, 5, 9, 2];
  valores.sort();
  console.log(valores);
  console.log(`Valor no index 3: ${valores[3]}`);
  valores.forEach((elemento, index) =>
    console.log(`valor[${index}]:${elemento}`),
  );
  const somaDobro = valores.map((e) => e * 2).reduce((a,b) => a + b);
  
  console.log(`Soma 2x ${somaDobro}`);
};

executar()