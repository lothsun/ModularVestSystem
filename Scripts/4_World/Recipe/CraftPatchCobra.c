class CraftPatchCobra extends CraftPatch_Base
{	
	override void Init()
	{
		m_PatchName = "ID Patch - Rotten's Raiders";
		m_PatchClassName = "MVS_Patch_13";
		super.Init();
		
		// Override ingredient 0 to use HumanSteakMeat instead of Rag
		InsertIngredient(0,"HumanSteakMeat");
		m_IngredientAddHealth[0] = -10;
	}
};