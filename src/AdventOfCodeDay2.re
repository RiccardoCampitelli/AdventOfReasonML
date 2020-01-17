let input = [|
  1,
  0,
  0,
  3,
  1,
  1,
  2,
  3,
  1,
  3,
  4,
  3,
  1,
  5,
  0,
  3,
  2,
  10,
  1,
  19,
  1,
  6,
  19,
  23,
  2,
  23,
  6,
  27,
  1,
  5,
  27,
  31,
  1,
  31,
  9,
  35,
  2,
  10,
  35,
  39,
  1,
  5,
  39,
  43,
  2,
  43,
  10,
  47,
  1,
  47,
  6,
  51,
  2,
  51,
  6,
  55,
  2,
  55,
  13,
  59,
  2,
  6,
  59,
  63,
  1,
  63,
  5,
  67,
  1,
  6,
  67,
  71,
  2,
  71,
  9,
  75,
  1,
  6,
  75,
  79,
  2,
  13,
  79,
  83,
  1,
  9,
  83,
  87,
  1,
  87,
  13,
  91,
  2,
  91,
  10,
  95,
  1,
  6,
  95,
  99,
  1,
  99,
  13,
  103,
  1,
  13,
  103,
  107,
  2,
  107,
  10,
  111,
  1,
  9,
  111,
  115,
  1,
  115,
  10,
  119,
  1,
  5,
  119,
  123,
  1,
  6,
  123,
  127,
  1,
  10,
  127,
  131,
  1,
  2,
  131,
  135,
  1,
  135,
  10,
  0,
  99,
  2,
  14,
  0,
  0,
|];

let intCode = (array: array(int)) => {
  let length = Array.length(input);
  let index = ref(0);

  while (index^ <= length - 4) {
    let currentItem = array[index^];

    let element1Index = array[index^ + 1];
    let element2Index = array[index^ + 2];
    let targetIndex = array[index^ + 3];

    let element1 = array[element1Index];
    let element2 = array[element2Index];

    switch (currentItem) {
    | 1 =>
      array[targetIndex] = element1 + element2;
      index := index^ + 4;
    | 2 =>
      array[targetIndex] = element1 * element2;
      index := index^ + 4;

    | 99 => index := length
    | _ => ()
    };
  };

  array[0];
};

let generateInputArray = (inputArray: array(int), noun: int, verb: int) => {
  let resultArray = Array.copy(inputArray);

  resultArray[1] = noun;
  resultArray[2] = verb;

  resultArray;
};

// generateInputArray(input, 12,2) //Part 1 result
//     -> intCode
//     -> Js.log

let target = 19690720;

let findPartTwoAnswer = (inputArray: array(int)): (int, int) => {
  let indexA = ref(0);
  let indexB = ref(0);
  let result = ref((0, 0));

  while (indexA^ <= 99) {
    indexB := 0;

    while (indexB^ <= 99) {
      let value = generateInputArray(inputArray, indexA^, indexB^)->intCode;

      if (value === target) {
        result := (indexA^, indexB^);
        indexA := 99;
        indexB := 99;
      };
      indexB := indexB^ + 1;
    };
    indexA := indexA^ + 1;
  };
  result^;
};

Js.log(findPartTwoAnswer(input)); // Part 2 result
