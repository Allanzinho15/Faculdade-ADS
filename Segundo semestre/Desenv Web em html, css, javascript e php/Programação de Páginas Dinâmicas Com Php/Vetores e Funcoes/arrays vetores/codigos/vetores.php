<?php
//Declarando um array vazio
$carros = array();

//Primeira forma de declaração e atribuição de valores
$carros = Array("Fusca", "Monza", "Passat");

//Segunda forma de declaração e atribuição de valores
//Esta forma é semelhante à anterior, mas utilizando sintaxe similar a do Javascript
$carros = ["Fusca", "Monza", "Passat"];

//Terceira forma de declaração e atribuição de valores
$carros[0] = "Fusca";
$carros[1] = "Monza";
$carros[2] = "Passat";

//Quarta forma de declaração e atribuição de valores
$carros[] = "Fusca";
$carros[] = "Monza";
$carros[] = "Passat";


<?php
 $carros = array (
	'vw'        => "Fusca",
	0           => "Passat",
	'chevrolet' => "Monza",
	1           => "Chevette",
	'fiat'      => "Tempra",
	2           => "Uno"
 );
 //A impressão desse array gera a seguinte saída
 /*
 Array
 (
	[vw] => Fusca
	[0] => Passat
	[chevrolet] => Monza
	[1] => Chevette
	[fiat] => Tempra
	[2] => Uno
 )
 */
 