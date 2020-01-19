let inputA = [|
  "R1003",
  "D430",
  "L108",
  "D570",
  "R459",
  "U7",
  "L68",
  "D232",
  "L130",
  "U93",
  "R238",
  "U951",
  "L821",
  "U723",
  "L370",
  "U873",
  "L680",
  "U749",
  "R110",
  "U17",
  "R185",
  "U484",
  "R550",
  "U356",
  "L212",
  "U350",
  "L239",
  "D208",
  "R666",
  "U70",
  "L369",
  "U448",
  "R54",
  "D402",
  "R165",
  "D375",
  "L468",
  "U886",
  "L303",
  "U779",
  "L752",
  "U664",
  "L120",
  "U643",
  "R405",
  "D288",
  "L220",
  "U727",
  "L764",
  "D615",
  "R630",
  "U688",
  "R961",
  "U499",
  "L782",
  "D852",
  "L743",
  "U443",
  "R355",
  "U856",
  "L795",
  "U235",
  "L876",
  "D511",
  "L108",
  "U637",
  "R427",
  "D338",
  "L699",
  "D911",
  "L506",
  "D607",
  "L539",
  "U977",
  "R654",
  "D634",
  "L196",
  "U944",
  "R922",
  "D774",
  "R358",
  "U828",
  "L970",
  "D386",
  "R795",
  "U602",
  "R249",
  "U793",
  "L171",
  "D217",
  "L476",
  "D123",
  "L179",
  "U820",
  "R895",
  "D239",
  "R363",
  "D629",
  "L226",
  "D811",
  "R962",
  "D848",
  "R218",
  "D581",
  "R369",
  "D872",
  "L653",
  "D281",
  "R304",
  "D302",
  "R780",
  "U636",
  "L413",
  "D712",
  "L642",
  "D886",
  "R613",
  "U736",
  "L968",
  "D82",
  "R953",
  "U408",
  "L130",
  "U654",
  "R312",
  "U74",
  "L610",
  "D798",
  "R242",
  "D586",
  "L808",
  "D664",
  "L764",
  "U455",
  "R264",
  "U384",
  "L154",
  "D484",
  "R883",
  "D276",
  "L423",
  "U11",
  "L145",
  "U156",
  "L268",
  "U46",
  "R202",
  "U641",
  "R920",
  "D483",
  "R859",
  "U94",
  "L173",
  "D796",
  "R11",
  "D328",
  "R48",
  "D161",
  "L615",
  "D396",
  "R350",
  "D48",
  "R946",
  "D233",
  "R385",
  "D294",
  "R640",
  "D301",
  "R810",
  "D824",
  "L969",
  "D469",
  "R34",
  "U995",
  "R750",
  "D827",
  "R52",
  "U606",
  "R143",
  "U868",
  "L973",
  "U863",
  "L17",
  "U995",
  "L236",
  "U994",
  "R403",
  "D312",
  "R49",
  "U143",
  "L399",
  "U821",
  "R974",
  "U119",
  "R410",
  "D233",
  "R228",
  "D326",
  "R112",
  "D512",
  "L950",
  "D103",
  "L590",
  "U80",
  "R7",
  "U441",
  "L744",
  "U643",
  "L80",
  "D631",
  "L576",
  "U680",
  "R369",
  "U741",
  "L87",
  "D748",
  "R773",
  "U145",
  "R464",
  "U546",
  "R80",
  "D251",
  "L972",
  "U414",
  "L390",
  "U148",
  "L84",
  "D481",
  "L425",
  "U293",
  "L564",
  "U880",
  "R535",
  "U703",
  "R981",
  "U944",
  "R224",
  "D366",
  "R29",
  "U517",
  "R342",
  "U686",
  "L384",
  "D650",
  "R983",
  "D287",
  "L108",
  "U713",
  "L523",
  "U695",
  "R881",
  "D126",
  "R151",
  "U153",
  "R161",
  "D791",
  "L599",
  "D936",
  "L816",
  "U387",
  "R411",
  "U637",
  "L434",
  "D22",
  "L720",
  "U579",
  "L661",
  "D644",
  "L220",
  "U325",
  "R753",
  "D392",
  "L503",
  "U617",
  "R1",
  "D956",
  "L607",
  "U602",
  "L800",
  "D749",
  "L193",
  "U215",
  "L91",
  "U733",
  "L606",
  "U510",
  "L124",
  "D550",
  "R303",
  "D835",
  "R19",
  "D326",
  "R577",
  "U265",
  "L156",
  "D924",
  "L122",
  "D186",
  "R803",
  "U3",
  "R879",
|];

let inputB = [|
  "L1003",
  "U603",
  "L675",
  "U828",
  "R671",
  "U925",
  "R466",
  "D707",
  "L39",
  "U1",
  "R686",
  "U946",
  "L438",
  "U626",
  "R714",
  "D365",
  "L336",
  "D624",
  "R673",
  "U672",
  "L729",
  "D965",
  "R824",
  "D533",
  "R513",
  "D914",
  "R829",
  "U275",
  "L424",
  "U10",
  "L244",
  "U158",
  "R779",
  "D590",
  "R116",
  "U714",
  "R662",
  "D989",
  "R869",
  "D547",
  "R817",
  "U315",
  "R439",
  "D29",
  "L599",
  "D870",
  "L645",
  "U656",
  "R845",
  "U19",
  "R960",
  "U669",
  "L632",
  "D567",
  "L340",
  "U856",
  "R955",
  "D314",
  "R452",
  "D896",
  "R574",
  "D162",
  "R240",
  "U302",
  "R668",
  "U706",
  "R394",
  "D24",
  "L422",
  "U884",
  "R804",
  "U576",
  "L802",
  "U400",
  "R405",
  "U676",
  "L344",
  "D628",
  "R672",
  "U580",
  "R710",
  "U536",
  "L712",
  "U738",
  "L266",
  "D212",
  "R552",
  "D229",
  "R265",
  "U835",
  "R152",
  "U784",
  "L478",
  "D87",
  "L783",
  "D327",
  "R728",
  "U590",
  "R408",
  "D397",
  "R363",
  "D654",
  "R501",
  "D583",
  "R445",
  "U897",
  "R888",
  "D480",
  "R455",
  "U593",
  "R906",
  "D506",
  "R985",
  "D361",
  "R361",
  "D619",
  "L462",
  "D873",
  "L248",
  "D348",
  "R540",
  "D578",
  "L274",
  "D472",
  "R254",
  "U647",
  "R54",
  "U681",
  "L33",
  "U343",
  "R913",
  "U120",
  "L64",
  "D849",
  "L953",
  "U407",
  "L64",
  "U744",
  "L482",
  "U240",
  "L82",
  "U69",
  "R480",
  "D796",
  "L137",
  "U527",
  "R428",
  "U67",
  "R123",
  "U688",
  "L985",
  "D944",
  "R583",
  "D804",
  "R331",
  "U328",
  "R906",
  "U376",
  "L966",
  "U433",
  "R863",
  "D931",
  "L315",
  "D9",
  "L77",
  "D141",
  "L738",
  "D661",
  "R742",
  "D44",
  "R383",
  "U78",
  "R106",
  "D301",
  "L186",
  "U907",
  "L304",
  "U786",
  "L256",
  "U718",
  "R861",
  "D145",
  "R694",
  "D721",
  "R607",
  "D418",
  "R358",
  "U600",
  "R228",
  "D139",
  "R476",
  "D451",
  "L49",
  "U616",
  "L491",
  "U8",
  "R371",
  "D735",
  "R669",
  "U388",
  "L905",
  "D282",
  "L430",
  "U491",
  "L775",
  "U891",
  "L831",
  "U350",
  "L247",
  "D609",
  "R489",
  "U266",
  "R468",
  "D748",
  "R134",
  "U187",
  "R882",
  "D315",
  "R344",
  "D363",
  "R349",
  "U525",
  "R831",
  "U644",
  "R207",
  "D563",
  "L1",
  "D946",
  "L559",
  "U789",
  "L187",
  "U370",
  "L284",
  "D910",
  "L394",
  "D560",
  "L705",
  "U661",
  "R272",
  "U109",
  "L12",
  "D554",
  "L670",
  "D169",
  "L375",
  "D100",
  "R382",
  "D491",
  "L53",
  "D916",
  "R152",
  "U82",
  "L236",
  "U845",
  "L860",
  "U732",
  "R327",
  "D190",
  "R888",
  "U722",
  "R770",
  "U993",
  "R509",
  "D970",
  "L225",
  "D756",
  "R444",
  "D992",
  "L746",
  "D35",
  "R329",
  "D452",
  "R728",
  "U575",
  "L325",
  "U414",
  "L709",
  "D844",
  "R692",
  "D575",
  "R132",
  "D520",
  "L506",
  "D384",
  "L581",
  "U36",
  "L336",
  "U849",
  "L944",
  "U450",
  "R138",
  "D186",
  "L613",
  "U805",
  "R32",
  "U763",
  "R210",
  "U556",
  "R125",
  "D499",
  "R729",
|];

type direction =
  | U
  | D
  | L
  | R
  | UnknownDirection;

type pathNode = {
  dir: direction,
  amount: int,
};

let getPathNode = (node: string) => {
  let dir =
    switch (node->String.sub(0, 1)) {
    | "U" => U
    | "D" => D
    | "L" => L
    | "R" => R
    | _ => UnknownDirection
    };

  let amount = node->String.sub(1, String.length(node) - 1)->int_of_string;

  {dir, amount};
};

let pathNodesA = inputA->Array.map(getPathNode, _);

let pathNodesB = inputB->Array.map(getPathNode, _);

let moveToPathNode = ((x: int, y: int), pathNode: pathNode) => {
  switch (pathNode.dir) {
  | U => (x + pathNode.amount, y)
  | D => (x - pathNode.amount, y)
  | L => (x, y - pathNode.amount)
  | R => (x, y + pathNode.amount)
  | _ => (x, y)
  };
};

// Js.log(moveToPathNode((0,0), { dir: R, amount:  2}))

// let pathA =
//   Array.fold_left(
//     (acc, el) =>
//       Array.init(1, (_) => moveToPathNode(acc, el))->Array.append(positions),
//     positions,
//     pathNodesA,
//   );
// Js.log(pathA);

let getPath = (pathNodes: array(pathNode)) => {
  let length = Array.length(pathNodes);

  let positions = ref([|(0, 0)|]);
  let index = ref(0);

  while (index^ < length) {
    let latestPosition = positions^[Array.length(positions^) - 1];
    let nextPathNode = pathNodes[index^];

    positions :=
      Array.append(
        positions^,
        [|moveToPathNode(latestPosition, nextPathNode)|],
      );

    index := index^ + 1;
  };

  positions^;
};
// Js.log(pathNodesA)
// Js.log(getPath(pathNodesA)) // length : 302

let pathA = getPath(pathNodesA);
let pathB = getPath(pathNodesB);

// Js.log(Array.length(pathB))

// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33
//xy
//11 to column that doesn't change is the one we check the other values by
//31 ex: 1 is the axis (column) and range goes 1 to 3

//20 to
//22  ex: 2 is the axis (row) and it goes 0 to 2 intersecting at 21

//xy
//11
//31

//01
//21 intersecting 21 11

type pathSection = {
  startNode: (int, int),
  endNode: (int, int),
};

type axis =
  | X
  | Y
  | NA;

type moveBy = {
  ax: axis,
  delta: (int, int),
};

let getAxis = (section: pathSection): moveBy => {
  let (x1, y1) = section.startNode;
  let (x2, y2) = section.endNode;

  let result =
    if (x1 !== x2) {
      let res = {ax: X, delta: (y1, y2)};
      res;
    } else {
      let res = {ax: Y, delta: (x1, x2)};
      res;
    };
  result;
};

let isInbetween = (value: int, (x: int, y: int)) => {
  let isIn = value > x && value < y;
  let isLess = value < x;
  let isMore = value > y;

  let result =
    switch (isIn, isLess, isMore) {
    | (true, _, _) => 0
    | (_, true, _) => (-1)
    | (_, _, true) => 1
    | (_, _, _) => 99
    };

  result;
};

let findCommon = ((x1, x2), (y1, y2)) => {
  let result =
    switch (isInbetween(x1, (y1, y2)), isInbetween(x2, (y1, y2))) {
    | ((-1), 0) => (y1, x2)
    | (0, 0) => (x1, x2)
    | (0, 1) => (x1, y2)
    | (_, _) => (0, 0)
    };

  result;
};

type intersectionResponse = {
  ax: axis,
  staticValue: int,
  range: (int, int),
};

type point = {
  x: int,
  y: int,
};

let findIntersectionRange = (sectionA: pathSection, sectionB: pathSection) => {
  let axisA = getAxis(sectionA);
  let axisB = getAxis(sectionB);
  let result =
    switch (axisA.ax) {
    | X =>
      // delta is y
      let (startA, endA) = axisA.delta;
      let (startB, endB) = axisB.delta;

      let (x, _) = sectionA.endNode;

      let res = {
        ax: X,
        staticValue: x,
        range: findCommon((startA, endA), (startB, endB)),
      };
      res;

    | Y =>
      //delta is x
      let (startA, endA) = axisA.delta;
      let (startB, endB) = axisB.delta;

      let (_, y) = sectionA.endNode;

      let res = {
        ax: Y,
        staticValue: y,
        range: findCommon((startA, endA), (startB, endB)),
      };
      res;
    | NA => {ax: NA, staticValue: 0, range: (0, 0)}
    };

  result;
};

let findIntersectionPoint =
    (sectionA: pathSection, sectionB: pathSection): point => {
  let axisA = getAxis(sectionA);
  let axisB = getAxis(sectionB);
  let point =
    switch (axisA.ax) {
    | X =>
      let (x, _) = sectionA.endNode; //  doesn't matter if i use
      let (_, y) = sectionB.endNode; // start node or end node
      //  I want the value that does not change.
      let (x1, y1) = axisA.delta; // delta is y
      let (x2, y2) = axisB.delta; // delta is x

      let intersectionX = isInbetween(x, (x2, y2)) === 0 ? Some(x) : None;
      let intersectionY = isInbetween(y, (x1, y1)) === 0 ? Some(y) : None;

      let res =
        switch (intersectionX, intersectionY) {
        | (Some(x), Some(y)) => {x, y}
        | (_, _) => {x: 0, y: 0}
        };
      res;
    | Y =>
      let (_, y) = sectionA.endNode; //  doesn't matter if i use
      let (x, _) = sectionB.endNode; // start node or end node
      //  I want the value that does not change.
      let (x1, y1) = axisA.delta; // delta is y
      let (x2, y2) = axisB.delta; // delta is x

      let intersectionX = isInbetween(x, (x2, y2)) === 0 ? Some(x) : None;
      let intersectionY = isInbetween(y, (x1, y1)) === 0 ? Some(y) : None;

      let res =
        switch (intersectionX, intersectionY) {
        | (Some(x), Some(y)) => {x, y}
        | (_, _) => {x: 0, y: 0}
        };
      res;
    | NA => {x: 0, y: 0}
    };
  point;
};

let getClosestIntersection =
    (pathA: array((int, int)), pathB: array((int, int))) => {
  let length = Array.length(pathA) - 1;

  let indexA = ref(0);
  let indexB = ref(0);

  while (indexA^ < length) {
    let pathSectionA = {
      startNode: pathA[indexA^],
      endNode: pathA[indexA^ + 1],
    };

    indexB := 0;

    while (indexB^ < length) {
      let pathSectionB = {
        startNode: pathB[indexB^],
        endNode: pathB[indexB^ + 1],
      };

      // do stuff here.

      indexB := indexB^ + 1;
    };

    indexA := indexA^ + 1;
  };
};

let result = getClosestIntersection(pathA, pathB);
