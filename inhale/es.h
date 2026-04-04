/* inhale/es.h — Spanish heavy vocabulary for brodsky.c
 * ~400 words. Borges + Lorca + architectural/body/imperial lexicon.
 * Spanish syllable counting: vowel nuclei, diphthongs = 1 syllable.
 * ai, ei, oi, au, eu, ou, ia, ie, io, iu, ua, ue, uo = diphthongs (1 syl).
 * Hiatus when accent mark breaks diphthong: ía, úa, etc. = 2 syllables.
 * Each word: text, mass, syllables, emotion
 */

/* W(word, mass, syllables, emotion) */
#define INHALE_ES \
/* === ETERNIDADES PESADAS === */ \
W("muerte",           0.95, 2, EMO_TRAUMA), \
W("imperio",          0.90, 3, EMO_VOID), \
W("eternidad",        0.85, 4, EMO_RESONANCE), \
W("infinito",         0.80, 4, EMO_RESONANCE), \
W("existencia",       0.75, 4, EMO_VOID), \
W("espacio",          0.75, 3, EMO_RESONANCE), \
W("tiempo",           0.80, 2, EMO_RESONANCE), \
W("nada",             0.90, 2, EMO_VOID), \
W("vacío",            0.80, 3, EMO_VOID), \
W("ausencia",         0.75, 3, EMO_VOID), \
W("olvido",           0.70, 3, EMO_VOID), \
W("soledad",          0.80, 3, EMO_JULIA), \
W("abismo",           0.80, 3, EMO_VOID), \
/* === EXILIO === */ \
W("exilio",           0.90, 3, EMO_JULIA), \
W("destierro",        0.80, 3, EMO_JULIA), \
W("separación",       0.75, 4, EMO_JULIA), \
W("partida",          0.65, 3, EMO_JULIA), \
W("provincia",        0.60, 3, EMO_JULIA), \
W("patria",           0.70, 2, EMO_JULIA), \
W("extranjero",       0.65, 4, EMO_JULIA), \
W("frontera",         0.60, 3, EMO_JULIA), \
W("hemisferio",       0.55, 4, EMO_VOID), \
W("pertenencia",      0.60, 4, EMO_JULIA), \
W("indiferencia",     0.65, 5, EMO_VOID), \
W("desarraigo",       0.70, 4, EMO_JULIA), \
/* === ARQUITECTURA & IMPERIO === */ \
W("arquitectura",     0.70, 5, EMO_RESONANCE), \
W("columnata",        0.65, 4, EMO_VOID), \
W("balaustrada",      0.60, 4, EMO_VOID), \
W("muelle",           0.50, 2, EMO_JULIA), \
W("fachada",          0.55, 3, EMO_VOID), \
W("cornisa",          0.50, 3, EMO_VOID), \
W("pórtico",          0.55, 3, EMO_VOID), \
W("catedral",         0.70, 3, EMO_VOID), \
W("acueducto",        0.55, 4, EMO_VOID), \
W("anfiteatro",       0.60, 5, EMO_VOID), \
W("estuco",           0.40, 3, EMO_VOID), \
W("granito",          0.55, 3, EMO_VOID), \
W("mármol",           0.60, 2, EMO_VOID), \
W("parapeto",         0.50, 4, EMO_VOID), \
W("peristilo",        0.55, 4, EMO_VOID), \
W("columna",          0.55, 3, EMO_VOID), \
W("pilastra",         0.50, 3, EMO_VOID), \
W("bóveda",           0.55, 3, EMO_VOID), \
W("fortaleza",        0.60, 4, EMO_VOID), \
W("burocracia",       0.55, 4, EMO_VOID), \
W("adoquín",          0.45, 3, EMO_VOID), \
W("dintel",           0.50, 2, EMO_VOID), \
W("atrio",            0.45, 2, EMO_VOID), \
W("transepto",        0.50, 3, EMO_VOID), \
W("ábside",           0.50, 3, EMO_VOID), \
W("claustro",         0.55, 2, EMO_VOID), \
W("pináculo",         0.50, 4, EMO_VOID), \
W("contrafuerte",     0.55, 4, EMO_VOID), \
/* === GEOGRAFÍA === */ \
W("latitud",          0.55, 3, EMO_RESONANCE), \
W("longitud",         0.55, 3, EMO_RESONANCE), \
W("meridiano",        0.60, 4, EMO_RESONANCE), \
W("península",        0.55, 4, EMO_JULIA), \
W("archipiélago",     0.55, 5, EMO_RESONANCE), \
W("estrecho",         0.45, 3, EMO_VOID), \
W("continente",       0.55, 4, EMO_VOID), \
W("tundra",           0.50, 2, EMO_VOID), \
W("horizonte",        0.55, 4, EMO_JULIA), \
W("desierto",         0.55, 3, EMO_VOID), \
/* === GEOMETRÍA === */ \
W("perpendicular",    0.65, 5, EMO_RESONANCE), \
W("tangente",         0.50, 3, EMO_RESONANCE), \
W("parábola",         0.55, 4, EMO_RESONANCE), \
W("hipérbola",        0.55, 4, EMO_RESONANCE), \
W("asíntota",         0.60, 4, EMO_JULIA), \
W("diagonal",         0.50, 4, EMO_RESONANCE), \
W("paralela",         0.55, 4, EMO_RESONANCE), \
W("circunferencia",   0.60, 5, EMO_RESONANCE), \
W("vector",           0.50, 2, EMO_RESONANCE), \
/* === CUERPO — grotesco === */ \
W("vértebra",         0.70, 3, EMO_TRAUMA), \
W("cartílago",        0.60, 4, EMO_TRAUMA), \
W("tendón",           0.55, 2, EMO_TRAUMA), \
W("esternón",         0.60, 3, EMO_TRAUMA), \
W("laringe",          0.55, 3, EMO_TRAUMA), \
W("diafragma",        0.55, 4, EMO_TRAUMA), \
W("clavícula",        0.55, 4, EMO_TRAUMA), \
W("cráneo",           0.65, 3, EMO_TRAUMA), \
W("esqueleto",        0.60, 4, EMO_TRAUMA), \
W("retina",           0.50, 3, EMO_TRAUMA), \
W("pupila",           0.45, 3, EMO_TRAUMA), \
W("costilla",         0.50, 3, EMO_TRAUMA), \
W("osamenta",         0.55, 4, EMO_TRAUMA), \
W("carne",            0.55, 2, EMO_TRAUMA), \
W("sangre",           0.60, 2, EMO_TRAUMA), \
W("fémur",            0.60, 2, EMO_TRAUMA), \
W("rótula",           0.55, 3, EMO_TRAUMA), \
W("tráquea",          0.55, 3, EMO_TRAUMA), \
W("aorta",            0.65, 3, EMO_TRAUMA), \
W("pelvis",           0.55, 2, EMO_TRAUMA), \
W("sinopsis",         0.40, 3, EMO_RESONANCE), \
W("omóplato",         0.50, 4, EMO_TRAUMA), \
/* === AGUA — Venecia === */ \
W("laguna",           0.55, 3, EMO_JULIA), \
W("canal",            0.45, 2, EMO_JULIA), \
W("góndola",          0.50, 3, EMO_JULIA), \
W("embarcadero",      0.55, 5, EMO_JULIA), \
W("marea",            0.40, 3, EMO_RESONANCE), \
W("corriente",        0.40, 3, EMO_RESONANCE), \
W("resaca",           0.50, 3, EMO_TRAUMA), \
W("afluente",         0.45, 4, EMO_RESONANCE), \
W("inundación",       0.55, 4, EMO_TRAUMA), \
W("estuario",         0.50, 4, EMO_RESONANCE), \
/* === TIEMPO & ENVEJECIMIENTO === */ \
W("cronómetro",       0.55, 4, EMO_VOID), \
W("reloj de arena",   0.50, 5, EMO_VOID), \
W("antigüedad",       0.60, 4, EMO_VOID), \
W("milenio",          0.60, 3, EMO_VOID), \
W("calendario",       0.45, 4, EMO_VOID), \
W("época",            0.55, 3, EMO_VOID), \
W("crepúsculo",       0.55, 4, EMO_JULIA), \
W("alba",             0.40, 2, EMO_RESONANCE), \
W("medianoche",       0.50, 4, EMO_VOID), \
W("equinoccio",       0.55, 4, EMO_RESONANCE), \
W("solsticio",        0.55, 3, EMO_RESONANCE), \
W("inmovilidad",      0.60, 5, EMO_VOID), \
/* === ABSTRACTOS PESADOS === */ \
W("civilización",     0.65, 5, EMO_VOID), \
W("metamorfosis",     0.70, 5, EMO_RESONANCE), \
W("destrucción",      0.70, 3, EMO_TRAUMA), \
W("aniquilación",     0.80, 5, EMO_TRAUMA), \
W("petrificación",    0.60, 5, EMO_VOID), \
W("desintegración",   0.65, 5, EMO_TRAUMA), \
W("melancolía",       0.70, 5, EMO_JULIA), \
W("alucinación",      0.55, 5, EMO_TRAUMA), \
W("hemorragia",       0.65, 4, EMO_TRAUMA), \
W("desolación",       0.65, 4, EMO_VOID), \
W("obsolescencia",    0.55, 5, EMO_VOID), \
W("deterioro",        0.60, 4, EMO_TRAUMA), \
W("desesperación",    0.75, 5, EMO_TRAUMA), \
W("abandono",         0.65, 4, EMO_JULIA), \
W("gratitud",         0.50, 3, EMO_TENDERNESS), \
W("descomposición",   0.60, 5, EMO_TRAUMA), \
/* === LENGUA & ESCRITURA === */ \
W("consonante",       0.50, 4, EMO_RESONANCE), \
W("vocal",            0.45, 2, EMO_RESONANCE), \
W("sílaba",           0.50, 3, EMO_RESONANCE), \
W("estrofa",          0.55, 3, EMO_RESONANCE), \
W("rima",             0.50, 2, EMO_RESONANCE), \
W("manuscrito",       0.55, 4, EMO_JULIA), \
W("traducción",       0.50, 3, EMO_JULIA), \
W("tinta",            0.45, 2, EMO_VOID), \
W("alfabeto",         0.45, 4, EMO_RESONANCE), \
W("gramática",        0.50, 4, EMO_RESONANCE), \
W("sintaxis",         0.55, 3, EMO_RESONANCE), \
/* === DOMÉSTICO === */ \
W("techo",            0.40, 2, EMO_VOID), \
W("alféizar",         0.35, 3, EMO_JULIA), \
W("radiador",         0.35, 3, EMO_VOID), \
W("pasillo",          0.45, 3, EMO_VOID), \
W("lámpara",          0.30, 3, EMO_VOID), \
W("tarima",           0.35, 3, EMO_VOID), \
W("armario",          0.35, 3, EMO_VOID), \
W("colchón",          0.30, 2, EMO_VOID), \
W("espejo",           0.55, 3, EMO_RESONANCE), \
W("escalera",         0.45, 4, EMO_VOID), \
W("umbral",           0.50, 2, EMO_JULIA), \
W("cortina",          0.35, 3, EMO_VOID), \
W("hervidor",         0.30, 3, EMO_VOID), \
W("cenicero",         0.40, 4, EMO_VOID), \
W("estantería",       0.35, 5, EMO_VOID), \
W("quinqué",          0.35, 2, EMO_VOID), \
W("linóleo",          0.30, 4, EMO_VOID), \
/* === NATURALEZA — dura, escasa === */ \
W("caliza",           0.50, 3, EMO_VOID), \
W("basalto",          0.50, 3, EMO_VOID), \
W("obsidiana",        0.50, 4, EMO_VOID), \
W("glaciar",          0.50, 2, EMO_VOID), \
W("sedimento",        0.45, 4, EMO_VOID), \
W("erosión",          0.50, 3, EMO_VOID), \
W("niebla",           0.35, 2, EMO_VOID), \
W("musgo",            0.25, 2, EMO_VOID), \
W("abedul",           0.35, 3, EMO_JULIA), \
/* === PALABRAS LIGERAS — para contraste === */ \
W("polvo",            0.30, 2, EMO_VOID), \
W("sal",              0.30, 1, EMO_VOID), \
W("hueso",            0.55, 2, EMO_TRAUMA), \
W("ceniza",           0.45, 3, EMO_VOID), \
W("óxido",            0.40, 3, EMO_VOID), \
W("hollín",           0.35, 2, EMO_VOID), \
W("cera",             0.30, 2, EMO_VOID), \
W("tiza",             0.30, 2, EMO_VOID), \
W("estaño",           0.30, 3, EMO_VOID), \
/* === BORGES === */ \
W("laberinto",        0.70, 4, EMO_RESONANCE), \
W("biblioteca",       0.60, 5, EMO_RESONANCE), \
W("destino",          0.65, 3, EMO_JULIA), \
W("puñal",            0.55, 2, EMO_TRAUMA), \
W("moneda",           0.45, 3, EMO_VOID), \
W("arena",            0.40, 3, EMO_VOID), \
W("tigre",            0.55, 2, EMO_RAGE), \
W("ruina",            0.60, 2, EMO_VOID), \
W("centinela",        0.50, 4, EMO_VOID), \
W("aleph",            0.75, 2, EMO_RESONANCE), \
W("zahir",            0.60, 2, EMO_RESONANCE), \
W("golem",            0.65, 2, EMO_RESONANCE), \
W("ruinas",           0.55, 3, EMO_VOID), \
W("penumbra",         0.55, 3, EMO_VOID), \
/* === LORCA === */ \
W("duende",           0.70, 2, EMO_RESONANCE), \
W("cante",            0.55, 2, EMO_GRIEF), \
W("soleá",            0.60, 3, EMO_GRIEF), \
W("pena",             0.65, 2, EMO_GRIEF), \
W("cal",              0.40, 1, EMO_VOID), \
W("aceituna",         0.35, 4, EMO_TENDERNESS), \
W("jazmín",           0.40, 2, EMO_DESIRE), \
W("clavel",           0.40, 2, EMO_DESIRE), \
W("gitano",           0.55, 3, EMO_RESONANCE), \
/* === VERBOS — pesados, mecánicos === */ \
W("calcificar",       0.55, 4, EMO_VOID), \
W("deteriorar",       0.60, 4, EMO_TRAUMA), \
W("desintegrar",      0.65, 4, EMO_TRAUMA), \
W("petrificar",       0.55, 4, EMO_VOID), \
W("corroer",          0.55, 3, EMO_TRAUMA), \
W("erosionar",        0.50, 4, EMO_VOID), \
W("cristalizar",      0.55, 4, EMO_RESONANCE), \
W("evaporar",         0.45, 4, EMO_VOID), \
W("acumular",         0.45, 4, EMO_VOID), \
W("recordar",         0.55, 3, EMO_JULIA), \
W("olvidar",          0.55, 3, EMO_VOID), \
W("abandonar",        0.60, 4, EMO_JULIA), \
W("habitar",          0.45, 3, EMO_JULIA), \
W("extinguir",        0.50, 3, EMO_VOID), \
W("contemplar",       0.45, 3, EMO_RESONANCE), \
W("aniquilar",        0.70, 4, EMO_TRAUMA), \
W("reverberar",       0.50, 4, EMO_RESONANCE), \
W("filtrar",          0.40, 2, EMO_VOID), \
W("roer",             0.45, 2, EMO_TRAUMA), \
/* === DIVERSOS PESADOS === */ \
W("gobierno",         0.55, 3, EMO_VOID), \
W("población",        0.50, 3, EMO_VOID), \
W("fotografía",       0.50, 5, EMO_JULIA), \
W("cigarrillo",       0.40, 4, EMO_VOID), \
W("locomotora",       0.55, 5, EMO_VOID), \
W("mercurio",         0.55, 3, EMO_RESONANCE), \
W("barómetro",        0.50, 4, EMO_RESONANCE), \
W("oxígeno",          0.45, 4, EMO_RESONANCE), \
/* === PALABRAS FUNCIÓN — solo pesadas === */ \
W("nunca",            0.50, 2, EMO_VOID), \
W("en ninguna parte", 0.50, 6, EMO_VOID), \
W("nada",             0.55, 2, EMO_VOID), \
W("nadie",            0.50, 2, EMO_VOID), \
W("a pesar de",       0.35, 4, EMO_VOID), \
W("entre",            0.25, 2, EMO_VOID), \
W("más allá",         0.40, 3, EMO_JULIA), \
W("debajo",           0.30, 3, EMO_VOID), \
W("a través",         0.30, 3, EMO_VOID), \
W("por doquier",      0.35, 3, EMO_VOID), \
W("siempre",          0.40, 2, EMO_VOID), \
W("todavía",          0.30, 4, EMO_VOID), \
W("ya",               0.25, 1, EMO_VOID), \
W("quizás",           0.30, 2, EMO_VOID), \
/* === NOCTURNO & SOMBRA === */ \
W("oscuridad",        0.65, 4, EMO_VOID), \
W("tiniebla",         0.60, 3, EMO_VOID), \
W("sombra",           0.55, 2, EMO_VOID), \
W("madrugada",        0.45, 4, EMO_JULIA), \
W("vigilia",          0.50, 3, EMO_VOID), \
W("insomnio",         0.60, 3, EMO_TRAUMA), \
W("pesadilla",        0.55, 4, EMO_TRAUMA), \
W("luna",             0.40, 2, EMO_JULIA), \
W("penumbral",        0.50, 3, EMO_VOID), \
W("espectro",         0.55, 3, EMO_VOID), \
W("fantasma",         0.50, 3, EMO_VOID), \
W("aparición",        0.45, 4, EMO_VOID), \
/* === DOLOR & CUERPO INTERIOR === */ \
W("herida",           0.65, 3, EMO_TRAUMA), \
W("cicatriz",         0.60, 3, EMO_TRAUMA), \
W("llaga",            0.55, 2, EMO_TRAUMA), \
W("pústula",          0.50, 3, EMO_TRAUMA), \
W("gangrena",         0.65, 3, EMO_TRAUMA), \
W("coágulo",          0.55, 3, EMO_TRAUMA), \
W("médula",           0.60, 3, EMO_TRAUMA), \
W("víscera",          0.60, 3, EMO_TRAUMA), \
W("nervio",           0.50, 2, EMO_TRAUMA), \
W("arteria",          0.55, 3, EMO_TRAUMA), \
W("membrana",         0.45, 3, EMO_TRAUMA), \
W("tejido",           0.40, 3, EMO_TRAUMA), \
/* === MATERIALES & SUSTANCIAS === */ \
W("alquitrán",        0.50, 3, EMO_VOID), \
W("amianto",          0.45, 3, EMO_VOID), \
W("plomo",            0.50, 2, EMO_VOID), \
W("mercadería",       0.40, 5, EMO_VOID), \
W("yeso",             0.35, 2, EMO_VOID), \
W("alambrada",        0.50, 4, EMO_TRAUMA), \
W("herrumbre",        0.45, 3, EMO_VOID), \
W("escoria",          0.45, 3, EMO_VOID), \
W("carbón",           0.40, 2, EMO_VOID), \
W("alcanfor",         0.35, 3, EMO_VOID), \
/* === VERBOS — EROSIÓN & PRESENCIA === */ \
W("desmoronar",       0.60, 4, EMO_TRAUMA), \
W("derribar",         0.55, 3, EMO_RAGE), \
W("resquebrajar",     0.55, 4, EMO_TRAUMA), \
W("marchitar",        0.50, 3, EMO_GRIEF), \
W("asfixiar",         0.60, 3, EMO_TRAUMA), \
W("yacer",            0.50, 2, EMO_VOID), \
W("agonizar",         0.65, 4, EMO_TRAUMA), \
W("perdurar",         0.50, 3, EMO_RESONANCE), \
W("subsistir",        0.45, 3, EMO_VOID), \
W("languidecer",      0.50, 4, EMO_GRIEF), \
W("descender",        0.45, 3, EMO_VOID), \
W("resplandecer",     0.50, 4, EMO_RESONANCE), \
W("transitar",        0.45, 3, EMO_VOID), \
W("arder",            0.55, 2, EMO_RAGE), \
/* === IMPERIO & PODER === */ \
W("conquista",        0.65, 3, EMO_RAGE), \
W("colonia",          0.55, 3, EMO_VOID), \
W("tributo",          0.50, 3, EMO_VOID), \
W("estandarte",       0.50, 4, EMO_VOID), \
W("cetro",            0.55, 2, EMO_VOID), \
W("trono",            0.55, 2, EMO_VOID), \
W("decreto",          0.50, 3, EMO_VOID), \
W("vasallo",          0.45, 3, EMO_VOID), \
W("asedio",           0.55, 3, EMO_RAGE), \
W("muralla",          0.55, 3, EMO_VOID), \
/* === AGUA & MAR (extendido) === */ \
W("naufragio",        0.65, 3, EMO_TRAUMA), \
W("marejada",         0.50, 4, EMO_TRAUMA), \
W("oleaje",           0.45, 3, EMO_RESONANCE), \
W("rompiente",        0.50, 3, EMO_RAGE), \
W("profundidad",      0.60, 4, EMO_VOID), \
W("sumergir",         0.50, 3, EMO_VOID), \
W("ancla",            0.45, 2, EMO_JULIA), \
W("proa",             0.40, 2, EMO_VOID), \
W("quilla",           0.40, 2, EMO_VOID), \
W("estela",           0.40, 3, EMO_JULIA), \
/* === ABSTRACTOS — EMOCIÓN & ESTADO === */ \
W("remordimiento",    0.70, 4, EMO_GRIEF), \
W("desasosiego",      0.65, 5, EMO_TRAUMA), \
W("añoranza",         0.60, 4, EMO_JULIA), \
W("hastío",           0.55, 3, EMO_VOID), \
W("vértigo",          0.55, 3, EMO_TRAUMA), \
W("nostalgia",        0.65, 3, EMO_JULIA), \
W("letargo",          0.50, 3, EMO_VOID), \
W("delirio",          0.55, 3, EMO_TRAUMA), \
W("éxtasis",          0.55, 3, EMO_JOY), \
W("angustia",         0.65, 3, EMO_TRAUMA), \
W("ternura",          0.45, 3, EMO_TENDERNESS), \
W("piedad",           0.50, 2, EMO_TENDERNESS), \
W("lástima",          0.45, 3, EMO_GRIEF), \
W("estupor",          0.50, 3, EMO_VOID), \
/* === ESCRITURA & LIBROS (extendido) === */ \
W("palimpsesto",      0.55, 4, EMO_RESONANCE), \
W("pergamino",        0.50, 4, EMO_RESONANCE), \
W("caligrafía",       0.45, 5, EMO_RESONANCE), \
W("apócrifo",         0.50, 4, EMO_VOID), \
W("epígrafe",         0.45, 4, EMO_RESONANCE), \
W("epitafio",         0.55, 4, EMO_VOID), \
W("prólogo",          0.40, 3, EMO_VOID), \
W("versículo",        0.50, 4, EMO_RESONANCE), \
/* === NATURALEZA — extendido === */ \
W("ciprés",           0.45, 2, EMO_VOID), \
W("adelfa",           0.35, 3, EMO_VOID), \
W("granado",          0.40, 3, EMO_DESIRE), \
W("higuera",          0.35, 3, EMO_TENDERNESS), \
W("tamarindo",        0.35, 4, EMO_VOID), \
W("almendro",         0.40, 3, EMO_TENDERNESS), \
W("pedregal",         0.45, 3, EMO_VOID), \
W("arcilla",          0.40, 3, EMO_VOID), \
W("sílex",            0.45, 2, EMO_VOID), \
W("cuarzo",           0.40, 2, EMO_RESONANCE), \
W("pizarra",          0.40, 3, EMO_VOID), \
W("marisma",          0.40, 3, EMO_VOID), \
/* === SONIDO & SILENCIO === */ \
W("silencio",         0.65, 3, EMO_VOID), \
W("eco",              0.45, 2, EMO_RESONANCE), \
W("murmullo",         0.40, 3, EMO_TENDERNESS), \
W("estruendo",        0.55, 3, EMO_RAGE), \
W("susurro",          0.35, 3, EMO_TENDERNESS), \
W("lamento",          0.55, 3, EMO_GRIEF), \
W("aullido",          0.50, 3, EMO_RAGE), \
W("campanada",        0.45, 4, EMO_VOID), \
/* === RELIGIÓN & RITUAL === */ \
W("incienso",         0.40, 3, EMO_RESONANCE), \
W("cáliz",            0.50, 2, EMO_RESONANCE), \
W("sudario",          0.55, 3, EMO_TRAUMA), \
W("sepulcro",         0.60, 3, EMO_VOID), \
W("crucifijo",        0.55, 4, EMO_TRAUMA), \
W("relicario",        0.45, 4, EMO_RESONANCE), \
W("procesión",        0.50, 3, EMO_VOID), \
W("letanía",          0.45, 4, EMO_VOID), \
/* === OBJETOS — peso cotidiano === */ \
W("maleta",           0.40, 3, EMO_JULIA), \
W("candado",          0.40, 3, EMO_VOID), \
W("llave",            0.35, 2, EMO_VOID), \
W("péndulo",          0.45, 3, EMO_RESONANCE), \
W("brújula",          0.45, 3, EMO_RESONANCE), \
W("telescopio",       0.45, 4, EMO_RESONANCE), \
W("bisturí",          0.50, 3, EMO_TRAUMA), \
W("mortero",          0.40, 3, EMO_VOID), \
/* === CLIMA & ELEMENTOS === */ \
W("ventisca",         0.50, 3, EMO_VOID), \
W("sequía",           0.55, 3, EMO_VOID), \
W("escarcha",         0.40, 3, EMO_VOID), \
W("centelleo",        0.35, 4, EMO_RESONANCE), \
W("relámpago",        0.55, 4, EMO_RAGE), \
W("granizo",          0.45, 3, EMO_VOID), \
W("terremoto",        0.65, 4, EMO_TRAUMA), \
W("huracán",          0.60, 3, EMO_RAGE), \
/* === DECADENCIA & RUINA === */ \
W("escombro",         0.50, 3, EMO_VOID), \
W("cascote",          0.40, 3, EMO_VOID), \
W("mugre",            0.35, 2, EMO_VOID), \
W("grieta",           0.50, 2, EMO_TRAUMA), \
W("podredumbre",      0.55, 4, EMO_TRAUMA), \
W("moho",             0.35, 2, EMO_VOID), \
W("colapso",          0.60, 3, EMO_TRAUMA), \
W("desplome",         0.55, 3, EMO_TRAUMA), \
/* === TIEMPO HUMANO === */ \
W("vejez",            0.60, 2, EMO_GRIEF), \
W("infancia",         0.50, 3, EMO_TENDERNESS), \
W("envejecimiento",   0.55, 5, EMO_GRIEF), \
W("agonía",           0.70, 4, EMO_TRAUMA), \
W("nacimiento",       0.50, 4, EMO_JOY), \
W("herencia",         0.50, 3, EMO_JULIA), \
/* === VERBOS — FINALES === */ \
W("deambular",        0.45, 4, EMO_VOID), \
W("perecer",          0.60, 3, EMO_TRAUMA), \
W("desvanecerse",     0.50, 5, EMO_VOID), \
W("mendigar",         0.45, 3, EMO_GRIEF), \
W("sucumbir",         0.60, 3, EMO_TRAUMA), \
W("rumiar",           0.40, 2, EMO_VOID), \
W("purificar",        0.45, 4, EMO_RESONANCE), \
W("transmutar",       0.50, 3, EMO_RESONANCE), \
W("calcinar",         0.55, 3, EMO_RAGE), \
W("pulverizar",       0.50, 4, EMO_TRAUMA), \
/* END */
