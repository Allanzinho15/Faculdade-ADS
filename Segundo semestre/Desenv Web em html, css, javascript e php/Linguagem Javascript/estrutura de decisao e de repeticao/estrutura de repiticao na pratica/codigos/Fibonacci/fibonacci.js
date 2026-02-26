const fibonacci = (x) =>{
    if(x==0 || x==1){
        return 1
    }  
    
    let fm1 = 1;
    let fm2 = 1;
    let fm;
    for (let i = 2; i <= x; i++) {
        fm = fm1 + fm2;
        fm2 = fm1;
        fm1 = fm;
        
    }
    return fm;
}
const executar = () =>{
    const x = Number(document.getElementById("v1").value);
    
    let serie = "";
    let i = 0;
    while (i <= x ) {
        serie += fibonacci(i) + " ";
        i++
    }
    document.getElementById("resp").innerHTML = `Resoposta: ${serie}`
} 