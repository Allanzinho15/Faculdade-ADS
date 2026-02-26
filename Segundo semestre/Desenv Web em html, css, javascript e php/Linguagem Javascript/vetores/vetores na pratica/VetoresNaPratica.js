
let valores =[]

const addValores = (x) =>{
    valores.push([valores.length+1, x])
}

const media = () =>{
    let soma = 0
    for(x of valores){
        soma += x[1]
        return soma / valores.length
    }
}

const drawBasic = () =>{
    var data = new google.visualization.DataTable()
    data.addColumn(`number`, `pos`)
    data.addColumn(`number`, `x`)
    data.addRows(valores)
    var options = {hAxis:{title:`Posicao`}, vAxis:{title:`valor de x`}}

    var chart = new google.visualization.LineChart(document.getElementByld(`chart_div`))

    chart.draw(data, options)

}

const executar = () =>{
    const x = Number(document.getElementByld("v1"));
    addValores(x)
    google.charts.load(`current`, {packages: [`corechart`, `line`]})
    google.charts.setOnLoadCallback(drawBasic)
    document.getElementById("media").innerHTML=`Media:${media()}`
}