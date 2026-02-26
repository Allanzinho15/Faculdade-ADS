

const imc = (peso, altura) => {

    if (altura > 100) {
        altura = altura / 100;
    }
    
  let peso_imc = peso/(altura*altura);

  return peso_imc
}
const situacao = (valor_imc) =>{
    if (valor_imc < 18.5) {
        return "Abaixo do Peso"
    }
    else if (valor_imc <= 25) {
        return "Peso Ideal (Parabéns)"
    }
    else if (valor_imc <= 30) {
        return "Levimente acima do peso"
    }
    else if (valor_imc <= 35) {
        return "Obesidade de Grau I"
    }
    else if (valor_imc <= 40) {
        return "Obesidade de Grau II (SEVERA)"
    }
    else {
        return "Obesidade de Grau III (MÓRBIDA)"
    }  
} 

const executar = () => {
    let peso1 = Number(document.getElementById("pes").value);
    let altura1 = Number(document.getElementById("alt").value)
    let calculo = imc(peso1, altura1);
    let resposta = situacao(calculo);

    alert(`IMC É ${calculo.toFixed(2)} :: Situação ${resposta}`);
}

