let input = [|
  87819,
  115026,
  134815,
  137411,
  67764,
  99126,
  73336,
  66216,
  81346,
  94695,
  76336,
  148938,
  100089,
  67341,
  101811,
  83239,
  58537,
  146622,
  140006,
  95115,
  87728,
  51664,
  93463,
  127521,
  62195,
  135326,
  104650,
  121170,
  142794,
  125892,
  112521,
  81326,
  110930,
  125273,
  70131,
  52291,
  116316,
  50670,
  82145,
  89869,
  55474,
  146525,
  67064,
  118129,
  74723,
  111269,
  128051,
  131256,
  145221,
  71059,
  137530,
  94041,
  92331,
  134280,
  133517,
  59611,
  113590,
  96394,
  64731,
  53491,
  83163,
  56863,
  51928,
  126075,
  92833,
  106741,
  94873,
  97241,
  105203,
  147315,
  108651,
  67542,
  111622,
  83522,
  125500,
  149284,
  70747,
  78945,
  125322,
  141425,
  111995,
  66892,
  131105,
  86896,
  87588,
  140571,
  116504,
  76218,
  146224,
  127819,
  59032,
  102767,
  137517,
  126448,
  141218,
  102267,
  78692,
  96306,
  56531,
  80841,
|];

let testList = [|1, 2, 3|];

let calculateFuel = mass => {
  mass / 3 - 2;
};

let resultDayOneP1 =
  Array.map(calculateFuel, input)
  ->Array.fold_left((acc, curr) => acc + curr, 0, _);

Js.log(resultDayOneP1); //day 1

let rec calculateFuelRec = (mass, acc) => {
  let fuel = calculateFuel(mass);

  let newAcc = fuel > 0 ? acc + fuel : acc;

  fuel >= 0 ? calculateFuelRec(fuel, newAcc) : newAcc;
};

let resultDayOneP2 =
  Array.map(calculateFuelRec(_, 0), input)
  ->Array.fold_left((acc, curr) => acc + curr, 0, _);

Js.log(resultDayOneP2);