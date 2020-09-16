export function convertType_ToType(obj) {
  let temp = {
    type: obj['type_'],
    ...obj
  }
  temp['type_'] = null
  delete temp['type_']
  return temp
}