
func Initialize()
{
	var chest = CreateObjectAbove(Chest, 50, 200, -1);
	chest->CreateContents(Flintstones, 5);
	chest->CreateContents(PrimitiveDarts, 5);
	chest->CreateContents(PrimitiveSpikes, 5);
	chest->CreateContents(MushroomPowder, 5);
	chest->CreateContents(Fiber, 5);
	
	CreateObjectAbove(StrawMan, 80, 200, -1);
	CreateObjectAbove(StrawMan, 110, 200, -1);
	CreateObjectAbove(StrawMan, 130, 200, -1);
	
	var c = CreateObjectAbove(Ruin_ChemicalLab, 250, 200, -1);
	AddEffect("Toxic", c, 1, 30);
}

func InitializePlayer(int plr)
{
	GetCrew(plr)->SetPosition(20,100);	
}

global func FxToxicTimer(object target)
{
	if (Random(3)) return;
	target->CreateToxicSmoke(0, 0, 50, 10 * 1000);
}