mod grass;
mod water;
mod metaclass;

fn main() {
    let grass = grass::Grass;
    let water = water::Water;

    grass.display_attributes();
    water.display_attributes();
}

