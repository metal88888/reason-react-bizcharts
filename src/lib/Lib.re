
/// **imporant** to_ > from_
let range = (from_, to_) => {
  List.init(to_ - from_, i => i + from_)
};

let rec zip_with = (func, list_a, list_b) => {
  switch (list_a) {
    | [] => []
    | [a, ...tail_a] => {
      switch (list_b) {
        | [] => []
        | [b, ...tail_b] => [func(a, b), ...zip_with(func, tail_a, tail_b)]
      }
    } 
  }
}

let zip = (list_a, list_b) => {
  zip_with((a, b) => (a, b), list_a, list_b)
}


let (<$>) = List.map;
