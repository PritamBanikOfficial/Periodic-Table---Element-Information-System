#include<stdio.h>
#include<string.h>

typedef struct {
    int atomicNumber;
    char symbol[3];
    char name[50];
    double atomicWeight;
    char category[50];
    int group;
    int period;
    char electronConfiguration[100];
    double density;
    double meltingPoint;
    double boilingPoint;
    double electronegativity;
    int yearDiscovered;
    char discoverer[100];
} Element;


Element elements[] = {
    {1, "H", "Hydrogen", 1.008, "Non-metal", 1, 1, "1s1", 0.08988, -259.16, -252.87, 2.20, 1766, "Cavendish"},
    {2, "He", "Helium", 4.0026, "Noble gas", 18, 1, "1s2", 0.1786, -272.20, -268.93, -1.00, 1895, "Ramsay"},
    {3, "Li", "Lithium", 6.94, "Alkali metal", 1, 2, "1s2 2s1", 0.534, 180.54, 1342, 0.98, 1817, "Arfvedson"},
    {4, "Be", "Beryllium", 9.0122, "Alkaline earth metal", 2, 2, "1s2 2s2", 1.848, 1287, 2470, 1.57, 1798, "Vauquelin"},
    {5, "B", "Boron", 10.81, "Metalloid", 13, 2, "1s2 2s2 2p1", 2.46, 2075, 4000, 2.04, 1808, "Davy"},
    {6, "C", "Carbon", 12.011, "Non-metal", 14, 2, "1s2 2s2 2p2", 2.267, 3550, 4027, 2.55, 1789, "Lavoisier"},
    {7, "N", "Nitrogen", 14.007, "Non-metal", 15, 2, "1s2 2s2 2p3", 0.0012506, -210.00, -195.79, 3.04, 1772, "Rutherford"},
    {8, "O", "Oxygen", 15.999, "Non-metal", 16, 2, "1s2 2s2 2p4", 0.001429, -218.79, -182.96, 3.44, 1774, "Priestley"},
    {9, "F", "Fluorine", 18.998, "Non-metal", 17, 2, "1s2 2s2 2p5", 0.001696, -219.67, -188.12, 3.98, 1886, "Moissan"},
    {10, "Ne", "Neon", 20.180, "Noble gas", 18, 2, "1s2 2s2 2p6", 0.0008999, -248.59, -246.05, -1.00, 1898, "Ramsay"},
    {11, "Na", "Sodium", 22.990, "Alkali metal", 1, 3, "1s2 2s2 2p6 3s1", 0.971, 97.72, 883, 0.93, 1807, "Davy"},
    {12, "Mg", "Magnesium", 24.305, "Alkaline earth metal", 2, 3, "1s2 2s2 2p6 3s2", 1.738, 650, 1090, 1.31, 1808, "Davy"},
    {13, "Al", "Aluminum", 26.982, "Post-transition metal", 13, 3, "1s2 2s2 2p6 3s2 3p1", 2.70, 660.32, 2519, 1.61, 1825, "Osmond"},
    {14, "Si", "Silicon", 28.085, "Metalloid", 14, 3, "1s2 2s2 2p6 3s2 3p2", 2.329, 1414, 2900, 1.90, 1824, "Berzelius"},
    {15, "P", "Phosphorus", 30.974, "Non-metal", 15, 3, "1s2 2s2 2p6 3s2 3p3", 1.823, 44.15, 280.5, 2.19, 1669, "Gahn"},
    {16, "S", "Sulfur", 32.06, "Non-metal", 16, 3, "1s2 2s2 2p6 3s2 3p4", 2.07, 115.21, 444.6, 2.58, 1809, "Sulfide"},
    {17, "Cl", "Chlorine", 35.45, "Non-metal", 17, 3, "1s2 2s2 2p6 3s2 3p5", 0.003214, -101.5, -34.04, 3.16, 1774, "Scheele"},
    {18, "Ar", "Argon", 39.948, "Noble gas", 18, 3, "1s2 2s2 2p6 3s2 3p6", 0.0017837, -189.34, -185.85, -1.00, 1894, "Ramsay"},
    {19, "K", "Potassium", 39.098, "Alkali metal", 1, 4, "1s2 2s2 2p6 3s2 3p6 4s1", 0.856, 63.50, 759, 0.82, 1807, "Davy"},
    {20, "Ca", "Calcium", 40.078, "Alkaline earth metal", 2, 4, "1s2 2s2 2p6 3s2 3p6 4s2", 1.54, 842, 1484, 1.00, 1808, "Davy"},
    {21, "Sc", "Scandium", 44.956, "Transition metal", 3, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d1", 2.989, 1541, 2836, 1.36, 1879, "Nilson"},
    {22, "Ti", "Titanium", 47.867, "Transition metal", 4, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d2", 4.506, 1885, 3287, 1.54, 1791, "Wulff"},
    {23, "V", "Vanadium", 50.942, "Transition metal", 5, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d3", 6.0, 1910, 3407, 1.63, 1801, "Sahama"},
    {24, "Cr", "Chromium", 51.996, "Transition metal", 6, 4, "1s2 2s2 2p6 3s2 3p6 4s1 3d5", 7.14, 1907, 2671, 1.66, 1797, "Vauquelin"},
    {25, "Mn", "Manganese", 54.938, "Transition metal", 7, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d5", 7.21, 1244, 2095, 1.55, 1774, "Gahn"},
    {26, "Fe", "Iron", 55.845, "Transition metal", 8, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d6", 7.874, 1538, 2862, 1.83, 4000, "Ancient"},
    {27, "Co", "Cobalt", 58.933, "Transition metal", 9, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d7", 8.90, 1495, 2927, 1.88, 1735, "Wohler"},
    {28, "Ni", "Nickel", 58.933, "Transition metal", 10, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d8", 8.912, 1455, 2913, 1.91, 1751, "Cronstedt"},
    {29, "Cu", "Copper", 63.546, "Transition metal", 11, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d9", 8.96, 1084.62, 2562, 1.90, 9000, "Ancient"},
    {30, "Zn", "Zinc", 65.38, "Transition metal", 12, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d10", 7.14, 419.53, 907, 1.65, 1746, "Cronstedt"},
    {31, "Ga", "Gallium", 69.723, "Post-transition metal", 13, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p1", 5.91, 29.76, 2204, 1.81, 1875, "Demarçay"},
    {32, "Ge", "Germanium", 72.630, "Metalloid", 14, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p2", 5.323, 938.25, 2833, 2.01, 1886, "Clemens"},
    {33, "As", "Arsenic", 74.922, "Metalloid", 15, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p3", 5.727, 817, 614, 2.18, 1250, "Berthelot"},
    {34, "Se", "Selenium", 78.971, "Non-metal", 16, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p4", 4.82, 221, 685, 2.55, 1817, "Selvage"},
    {35, "Br", "Bromine", 79.904, "Non-metal", 17, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p5", 3.102, -7.2, 58.8, 2.96, 1826, "Balard"},
    {36, "Kr", "Krypton", 83.798, "Noble gas", 18, 4, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6", 0.003733, -157.37, -153.22, -1.00, 1898, "Ramsay"},
    {37, "Rb", "Rubidium", 85.468, "Alkali metal", 1, 5, "1s2 2s2 2p6 3s2 3p6 4s2 5s1", 1.532, 39.31, 688, 0.82, 1861, "Bunsen"},
    {38, "Sr", "Strontium", 87.62, "Alkaline earth metal", 2, 5, "1s2 2s2 2p6 3s2 3p6 4s2 5s2", 2.64, 777, 1382, 0.95, 1808, "Rutherford"},
    {39, "Y", "Yttrium", 88.906, "Transition metal", 3, 5, "1s2 2s2 2p6 3s2 3p6 4s2 5s2 4d1", 4.469, 1522, 3330, 1.22, 1794, "Moseley"},
    {40, "Zr", "Zirconium", 91.224, "Transition metal", 4, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d2", 6.52, 1855, 4409, 1.33, 1789, "Hafner"},
    {41, "Nb", "Niobium", 92.906, "Transition metal", 5, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d4", 8.57, 2468, 4744, 1.60, 1801, "Hatchett"},
    {42, "Mo", "Molybdenum", 95.95, "Transition metal", 6, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d5", 10.28, 2623, 4639, 2.16, 1778, "Hjelm"},
    {43, "Tc", "Technetium", 98, "Transition metal", 7, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d5 5s2", 11.5, 2157, 4265, 1.9, 1937, "Cori"},
    {44, "Ru", "Ruthenium", 101.07, "Transition metal", 8, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d7", 12.37, 2334, 4150, 2.2, 1844, "Klaproth"},
    {45, "Rh", "Rhodium", 102.91, "Transition metal", 9, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d8", 12.41, 1964, 3695, 2.28, 1803, "Wohler"},
    {46, "Pd", "Palladium", 106.42, "Transition metal", 10, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d10", 12.02, 1554, 2963, 2.20, 1803, "Wohler"},
    {47, "Ag", "Silver", 107.87, "Transition metal", 11, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s1", 10.49, 961.78, 2162, 1.93, 3000, "Ancient"},
    {48, "Cd", "Cadmium", 112.41, "Transition metal", 12, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2", 8.65, 321.07, 767, 1.69, 1817, "Stromeyer"},
    {49, "In", "Indium", 114.82, "Post-transition metal", 13, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 4p1", 7.31, 156.6, 2072, 1.78, 1863, "Reich"},
    {50, "Sn", "Tin", 118.71, "Post-transition metal", 14, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 4p2", 7.31, 231.93, 2602, 1.96, 3000, "Ancient"},
	{51, "Sb", "Antimony", 121.76, "Metalloid", 5, 15, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5p3", 6.697, 631, 1587, 2.05,  0, "Known since ancient times"},
    {52, "Te", "Tellurium", 127.60, "Metalloid", 16, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 4p4", 6.24, 449.85, 988, 2.1, 1782, "Rittner"},
    {53, "I", "Iodine", 126.90, "Non-metal", 17, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 4p5", 4.94, 113.7, 184.4, 2.66, 1811, "Courtois"},
    {54, "Xe", "Xenon", 131.29, "Noble gas", 18, 5, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5p6", 0.0059, -111.75, -108.12, -1.00, 1898, "Ramsay"},
    {55, "Cs", "Cesium", 132.91, "Alkali metal", 1, 6, "1s2 2s2 2p6 3s2 3p6 4s2 5s1", 1.93, 28.5, 671, 0.79, 1860, "Bunsen"},
    {56, "Ba", "Barium", 137.33, "Alkaline earth metal", 2, 6, "1s2 2s2 2p6 3s2 3p6 4s2 5s2", 3.62, 727, 1140, 0.89, 1808, "Davy"},
    {57, "La", "Lanthanum", 138.91, "Lanthanide", 3, 6, "1s2 2s2 2p6 3s2 3p6 4s2 5d1", 6.15, 920, 3464, 1.10, 1839, "Gadolinium"},
    {58, "Ce", "Cerium", 140.12, "Lanthanide", 4, 6, "1s2 2s2 2p6 3s2 3p6 4s2 5d1 4f1", 6.77, 798, 3257, 1.12, 1803, "Berzelius"},
    {59, "Pr", "Praseodymium", 140.91, "Lanthanide", 5, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f3", 6.77, 931, 3520, 1.13, 1885, "Mosander"},
    {60, "Nd", "Neodymium", 144.24, "Lanthanide", 6, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f4", 7.01, 1021, 3127, 1.14, 1885, "Mosander"},
    {61, "Pm", "Promethium", 145, "Lanthanide", 7, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f5", 7.26, 1042, 3000, 1.13, 1945, "Marignac"},
    {62, "Sm", "Samarium", 150.36, "Lanthanide", 8, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f6", 7.52, 1072, 1900, 1.17, 1879, "Ostrogradsky"},
    {63, "Eu", "Europium", 151.96, "Lanthanide", 9, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f7", 5.243, 822, 1527, 1.20, 1896, "Demarçay"},
    {64, "Gd", "Gadolinium", 157.25, "Lanthanide", 10, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f8", 7.90, 1312, 3266, 1.20, 1880, "Deville"},
    {65, "Tb", "Terbium", 158.93, "Lanthanide", 11, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f9", 8.23, 1356, 3260, 1.20, 1843, "Mosander"},
    {66, "Dy", "Dysprosium", 162.50, "Lanthanide", 12, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f10", 8.55, 1412, 2562, 1.22, 1886, "Mosander"},
    {67, "Ho", "Holmium", 164.93, "Lanthanide", 13, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f11", 8.79, 1474, 2700, 1.23, 1878, "Mosander"},
    {68, "Er", "Erbium", 167.26, "Lanthanide", 14, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f12", 9.07, 1529, 2868, 1.24, 1843, "Mosander"},
    {69, "Tm", "Thulium", 168.93, "Lanthanide", 15, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f13", 9.32, 1545, 1629, 1.25, 1879, "Mosander"},
    {70, "Yb", "Ytterbium", 173.04, "Lanthanide", 16, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f14", 6.97, 819, 1196, 1.1, 1878, "Mosander"},
    {71, "Lu", "Lutetium", 174.97, "Lanthanide", 17, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d1 4f14 5d1", 9.84, 1663, 3402, 1.27, 1907, "Giesel"},
    {72, "Hf", "Hafnium", 178.49, "Transition metal", 4, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5d2", 13.31, 2227, 4603, 1.30, 1923, "Zirkel"},
    {73, "Ta", "Tantalum", 180.95, "Transition metal", 5, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5d3", 16.69, 3017, 5458, 1.50, 1802, "Ekeberg"},
    {74, "W", "Tungsten", 183.84, "Transition metal", 6, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5d4", 19.25, 3422, 5555, 2.36, 1783, "Elhauge"},
    {75, "Re", "Rhenium", 186.21, "Transition metal", 7, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5d5", 21.02, 5869, 5597, 1.70, 1925, "Osmond"},
    {76, "Os", "Osmium", 190.23, "Transition metal", 8, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5d6", 22.59, 3300, 5027, 1.89, 1803, "Smithson"},
    {77, "Ir", "Iridium", 192.22, "Transition metal", 9, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5d7", 22.56, 2716, 4440, 2.20, 1803, "Smithson"},
    {78, "Pt", "Platinum", 195.08, "Transition metal", 10, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5d9", 19.86, 2041, 3825, 2.28, 1803, "Smithson"},
    {79, "Au", "Gold", 196.97, "Transition metal", 11, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5d10", 19.32, 1064, 2807, 1.93, 2000, "Ancient"},
    {80, "Hg", "Mercury", 200.59, "Transition metal", 12, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5d10", 13.534, -38.83, 356.73, 1.63, 1817, "Cayzer"},
    {81, "Tl", "Thallium", 204.38, "Post-transition metal", 13, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 6s2", 7.31, 304, 1457, 1.54, 1861, "Cleve"},
    {82, "Pb", "Lead", 207.2, "Post-transition metal", 14, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 6s2", 11.34, 327.5, 1749, 1.47, 3000, "Ancient"},
    {83, "Bi", "Bismuth", 208.98, "Post-transition metal", 15, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 6s2 6p1", 7.60, 271, 1564, 1.70, 1835, "Wohler"},
    {84, "Po", "Polonium", 209, "Metalloid", 16, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 6s2 6p4", 9.2, 254, 962, 1.88, 1898, "Giesel"},
    {85, "At", "Astatine", 210, "Metalloid", 17, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 6s2 6p5", 6.1, 302, 337, 2.2, 1940, "Dale"},
    {86, "Rn", "Radon", 222, "Noble gas", 18, 6, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 6s2 6p6", 0.0001, -71, -62, -1.00, 1900, "Ramsay"},
    {87, "Fr", "Francium", 223, "Alkali metal", 1, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5s1 7s1", 0.970, 27, 650, 0.7, 1939, "Giesel"},
    {88, "Ra", "Radium", 226, "Alkaline earth metal", 2, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5s2 7s2", 0.5, 1410, 1750, 0.9, 1898, "Giesel"},
    {89, "Ac", "Actinium", 227, "Actinide", 3, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f1 7s2", 1.55, 1050, 1500, 1.1, 1899, "Giesel"},
    {90, "Th", "Thorium", 232.04, "Actinide", 4, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f2 6d2 7s2", 11.72, 1750, 4790, 1.50, 1828, "Giesel"},
    {91, "Pa", "Protactinium", 231.04, "Actinide", 5, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f3 6d1 7s2", 15.37, 1568, 4000, 1.50, 1897, "Giesel"},
    {92, "U", "Uranium", 238.03, "Actinide", 6, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f3 6d1 7s2", 18.95, 4131, 4131, 1.38, 1789, "Klingel"},
    {93, "Np", "Neptunium", 237.048, "Actinide", 7, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f4 6d1 7s2", 20.45, 2900, 4131, 1.36, 1891, "Giesel"},
    {94, "Pu", "Plutonium", 244, "Actinide", 8, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f6 6d1 7s2", 19.86, 640, 3235, 1.28, 1940, "Giesel"},
    {95, "Am", "Americium", 243, "Actinide", 9, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f7 6d1 7s2", 13.67, 1176, 1500, 1.3, 1899, "Giesel"},
    {96, "Cm", "Curium", 247, "Actinide", 10, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f7 6d1 7s2", 13.51, 1340, 2910, 1.3, 1944, "Giesel"},
    {97, "Bk", "Berkelium", 247, "Actinide", 11, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f9 6d1 7s2", 14.78, 986, 2470, 1.3, 1950, "Giesel"},
    {98, "Cf", "Californium", 251, "Actinide", 12, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f10 6d1 7s2", 15.1, 900, 1900, 1.3, 1950, "Giesel"},
    {99, "Es", "Einsteinium", 252, "Actinide", 13, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f11 6d1 7s2", 9.50, 860, 1630, 1.3, 1952, "Giesel"},
    {100, "Fm", "Fermium", 257, "Actinide", 14, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f12 6d1 7s2", 9.70, 1520, 1800, 1.3, 1952, "Giesel"},
    {101, "Md", "Mendelevium", 258, "Actinide", 15, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f13 6d1 7s2", 10.3, 1100, 1500, 1.3, 1955, "Giesel"},
    {102, "No", "Nobelium", 259, "Actinide", 16, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f14 6d1 7s2", 9.5, 827, 1440, 1.3, 1958, "Giesel"},
    {103, "Lr", "Lawrencium", 262, "Actinide", 17, 7, "1s2 2s2 2p6 3s2 3p6 4s2 5f14 6d1 7s2", 14.3, 1627, 1627, 1.3, 1961, "Giesel"},
    {104, "Rf", "Rutherfordium", 267, "Transition metal", 4, 7, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5f14 6d2", 10.2, 2400, 5800, 1.3, 1964, "Giesel"},
    {105, "Db", "Dubnium", 270, "Transition metal", 5, 7, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5f14 6d3", 15.1, 3400, 5000, 1.3, 1967, "Giesel"},
    {106, "Sg", "Seaborgium", 271, "Transition metal", 6, 7, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5f14 6d4", 13.2, 2700, 5100, 1.3, 1974, "Giesel"},
    {107, "Bh", "Bohrium", 270, "Transition metal", 7, 7, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5f14 6d5", 14.6, 2900, 5000, 1.3, 1981, "Giesel"},
    {108, "Hs", "Hassium", 277, "Transition metal", 8, 7, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5f14 6d6", 13.0, 2400, 5100, 1.3, 1984, "Giesel"},
    {109, "Mt", "Meitnerium", 278, "Transition metal", 9, 7, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5f14 6d7", 12.6, 3000, 5100, 1.3, 1985, "Giesel"},
    {110, "Ds", "Darmstadtium", 281, "Transition metal", 10, 7, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5f14 6d8", 11.2, 2800, 5100, 1.3, 2003, "Giesel"},
    {111, "Rg", "Roentgenium", 282, "Transition metal", 11, 7, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5f14 6d9", 10.3, 2700, 5100, 1.3, 2004, "Giesel"},
    {112, "Cn", "Copernicium", 285, "Transition metal", 12, 7, "1s2 2s2 2p6 3s2 3p6 4s2 4d10 5s2 5f14 6d10", 8.65, 2850, 4000, 1.3, 2009, "Giesel"}
};

void lookupElementBySymbol(char *symbol) {
    int found = 0;
    printf("\n");
    for (int i = 0; i < sizeof(elements) / sizeof(elements[0]); i++) {
        if (strcmp(elements[i].symbol, symbol) == 0) {
            printf("Element found:\n");
            printf("Atomic Number: %d\n", elements[i].atomicNumber);
            printf("Symbol: %s\n", elements[i].symbol);
            printf("Name: %s\n", elements[i].name);
            printf("Atomic Weight: %.4f\n", elements[i].atomicWeight);
            printf("Category: %s\n", elements[i].category);
            printf("Group: %d\n", elements[i].group);
            printf("Period: %d\n", elements[i].period);
            printf("Electron Configuration: %s\n", elements[i].electronConfiguration);
            printf("Density: %.5f g/cm³\n", elements[i].density);
            printf("Melting Point: %.2f °C\n", elements[i].meltingPoint);
            printf("Boiling Point: %.2f °C\n", elements[i].boilingPoint);
            printf("Electronegativity: %.2f\n", elements[i].electronegativity);
            printf("Year Discovered: %d\n", elements[i].yearDiscovered);
            printf("Discoverer: %s\n", elements[i].discoverer);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element with symbol %s not found.\n", symbol);
    }
}

void lookupElementByAtomicNumber(int atomicNumber) {
    int found = 0;
    printf("\n");
    for (int i = 0; i < sizeof(elements) / sizeof(elements[0]); i++) {
        if (elements[i].atomicNumber == atomicNumber) {
            printf("Element found:\n");
            printf("Atomic Number: %d\n", elements[i].atomicNumber);
            printf("Symbol: %s\n", elements[i].symbol);
            printf("Name: %s\n", elements[i].name);
            printf("Atomic Weight: %.4f\n", elements[i].atomicWeight);
            printf("Category: %s\n", elements[i].category);
            printf("Group: %d\n", elements[i].group);
            printf("Period: %d\n", elements[i].period);
            printf("Electron Configuration: %s\n", elements[i].electronConfiguration);
            printf("Density: %.5f g/cm³\n", elements[i].density);
            printf("Melting Point: %.2f °C\n", elements[i].meltingPoint);
            printf("Boiling Point: %.2f °C\n", elements[i].boilingPoint);
            printf("Electronegativity: %.2f\n", elements[i].electronegativity);
            printf("Year Discovered: %d\n", elements[i].yearDiscovered);
            printf("Discoverer: %s\n", elements[i].discoverer);
            found = 1;
            break;
        }
    }
    printf("\n\n");
    if (!found) {
        printf("Element with atomic number %d not found.\n\n", atomicNumber);
    }
}

int main() {
    int choice, atomicNumber;
    char symbol[3];

    while (1) {
        printf("\n\nInteractive Periodic Table\n");
        printf("1. Lookup Element by Symbol\n");
        printf("2. Lookup Element by Atomic Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element symbol: ");
                scanf("%s", symbol);
                lookupElementBySymbol(symbol);
                break;
            case 2:
                printf("Enter atomic number: ");
                scanf("%d", &atomicNumber);
                lookupElementByAtomicNumber(atomicNumber);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

