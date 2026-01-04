from grass import Grass
from water import Water

def main():
    grass = Grass()
    water = Water()

    grass.display_attributes()
    water.display_attributes()

if __name__ == "__main__":
    main()

