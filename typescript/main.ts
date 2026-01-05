import { Grass } from "./grass";
import { Water } from "./water";

const objects = [new Grass(), new Water()];

objects.forEach(obj => {
  console.log(obj.type, obj.describe());
});

