import math

GRID_WIDTH = 128
SM_REDUCED_BY = 4
SM_LENGTH = GRID_WIDTH / SM_REDUCED_BY
SEARCH_MAP = 0
SEARCH_RAD = 9.5

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def distance_to(self, point):
        xdist = self.x - point.x
        ydist = self.y - point.y
        return math.sqrt(xdist*xdist + ydist*ydist)
    
    @property
    def inverse_x(self): 
        return (GRID_WIDTH - self.x) -1
    
    @property
    def inverse_y(self):
        return (GRID_WIDTH - self.y) -1
    
    @property
    def bitmap_x(self):
        return math.floor(self.inverse_x / SM_REDUCED_BY)
    
    @property
    def bitmap_y(self): 
        return math.floor(self.inverse_y / SM_REDUCED_BY)

    @property
    def bitmap_index(self):
        return (SM_LENGTH * self.bitmap_y) + self.bitmap_x
    
    @property
    def bitmap_val(self):
        return int(math.pow(2, self.bitmap_index))
    
    def points_in_rad(self): 
        left = math.floor(self.x - SEARCH_RAD)
        right = math.ceil(self.x + SEARCH_RAD)

        top = math.ceil(self.y + SEARCH_RAD)
        bottom = math.floor(self.y - SEARCH_RAD)

        right_ext = min(right, GRID_WIDTH)
        top_ext = min(top, GRID_WIDTH)
        bottom_ext = max(bottom, 0)
        left_ext = max(left, 0)

        points = []
        for xpos in range(left_ext, right_ext):
            for ypos in range(bottom_ext, top_ext):
                if self.distance_to(Point(xpos, ypos)) <= SEARCH_RAD: 
                    points.append(Point(xpos, ypos))

        return points

    def search(self): 
        global SEARCH_MAP
        quadrant_size = SM_REDUCED_BY / 2
        min_ = max(quadrant_size / 2, 1)
        max_ = quadrant_size + min_
        print(quadrant_size, min_, max_)
        for point in self.points_in_rad():
            x_in_range = (min_ <= point.x % 4 < max_)
            y_in_range = (min_ <= point.y % 4 < max_)
            if x_in_range and y_in_range:
                SEARCH_MAP |= point.bitmap_val

my_point = Point(11, 11)
my_point.search()
STR_SEARCH_MAP = str(bin(SEARCH_MAP)).strip()

for row in reversed(range(1, int(SM_LENGTH))):
    start = -(row * int(SM_LENGTH))
    end = start + int(SM_LENGTH)
    print(STR_SEARCH_MAP[start:end if end else None])

"""
00110000000000000000000000000000
01111000000000000000000000000000
11111000000000000000000000000000
11111000000000000000000000000000
01111000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
00000000000000000000000000000000
"""




