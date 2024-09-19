### EasyGAS Plugin Documentation

# EasyGAS

**EasyGAS** is a plugin for Unreal Engine that simplifies the setup of the Gameplay Ability System (GAS) with Data-Driven Inputs and Gameplay Tags. Whether you're using Blueprints or C++, EasyGAS enables you to quickly configure a complete GAS setup with minimal hassle. In addition to basic setup, EasyGAS offers extra functionality like dynamic debuffs, example abilities, custom AbilityTasks, and components for applying effects or tags.

## Features

- **One-Function GAS Setup:** Quickly set up a working Gameplay Ability System (GAS) in either Blueprint or C++ with a single function call.
- **Data-Driven Inputs:** Configure input bindings for abilities using data-driven approaches, allowing easy updates and flexibility.
- **Gameplay Tags Support:** Automatically integrate with the Gameplay Tags system for tagging abilities, effects, and actors.
- **Damage & Debuff Gameplay Effects:** Create Gameplay Effects (GEs) with dynamic debuff functionalities.
- **Example Gameplay Abilities:** Examples provided in both C++ and Blueprint for quick start and reference.
- **Custom Ability Tasks:** Custom-built Ability Tasks for specialized behavior in abilities.
- **GameplayEffectComponent & GameplayEffectContext:** Easily manage effects through components and context management.
- **Effect Actors:** Actors that apply Gameplay Effects or tags based on conditions with physics volumes or overlap actors.

## Why I Developed EasyGAS

I developed this plugin so that anyone can easily add the Gameplay Ability System (GAS) to their project with the extra functionality that I’ve accumulated over the months from various project needs. Since setting up GAS requires some C++ knowledge, I wanted to make it more accessible for those who might still struggle with C++. However, I still recommend using C++ for GAS to unlock its full potential.

For anyone trying to learn how to set up or use GAS, I believe this plugin can be of great help. While I'm still an intermediate developer, and some aspects could likely be improved, I hope this plugin makes your development process smoother.

I’ve documented the plugin as much as possible and exposed all functionality to Blueprint. While I primarily use C++ and originally developed everything with that in mind, I wanted to ensure Blueprint users could also benefit from the plugin.

If you're interested in learning more about GAS or want to dive deeper into its potential, I highly recommend checking out the Udemy course by FluidMechanics Aura. Some of the functions in this plugin are inspired by concepts and techniques taught in that course. Also this documentation: https://github.com/tranek/GASDocumentation

I truly hope you find this plugin useful and that it helps you get your GAS up and running faster!

---

## Plugin Overview

The **EasyGAS** plugin is divided into four key modules, each designed to serve a specific purpose:

### 1. GameplayAbilitySystem

This module contains all **GAS-related classes**. My intention with this module was to extend the functionality of Unreal’s built-in `GameplayAbility` module by providing additional features and utilities that are generic and useful across different projects.

- You can think of it as a **GAS extension library** that can be easily integrated into any project or module without conflicts.
- The classes in this module are designed to be flexible and reusable, adding extra functionality on top of the default GAS setup provided by Unreal.

### 2. GameplayTags

This module is dedicated to **Native Gameplay Tags** and comes with a `BlueprintFunctionLibrary` to facilitate quick and easy access to them.

- It serves as a **GameplayTag manager** that can be seamlessly integrated into any existing module or project.
- To help keep things organized, I’ve provided a custom structure (`struct`) that, in my opinion, makes handling Gameplay Tags much more structured and clear.

### 3. Input

This module is responsible for setting up **player input** and should not be added to other modules.

- It encapsulates all the input functionality, especially in terms of using **GAS** and **GameplayTags**.
- By keeping the input system separate and self-contained, I aim to provide a clean and easy way to bind inputs to abilities without complicating other parts of the project.

### 4. Demo

The **Demo** module contains example classes to demonstrate how to set up **GAS** with some basic abilities and an asset manager.

- It’s mainly for showing how everything can work together in practice, giving you a clear idea of how to set up your own system.
- If you’re not interested in the demo, you can safely delete this module without any impact on the core functionality of the plugin.

---

## How to Set Up the Plugin

Follow these steps to integrate the **EasyGAS** plugin into your Unreal Engine project:

### 1. Clone the Repository

First, clone the repository and add it to your project:

```bash
git clone https://github.com/your-username/EasyGAS.git
```

- Copy the cloned folder into your project's `Plugins` folder. If your project doesn't have a `Plugins` folder yet, create one in the root directory of your project.

### 2. Asset Manager Setup

Before compiling the project, you'll need to configure the **Asset Manager**. This is required to initialize both **NativeGameplayTags** and **AbilitySystemGlobals**.

#### Steps:

1. Open your project’s `Config` folder and edit the `DefaultEngine.ini` file.
   
2. You will need to override the default Asset Manager class in order to initialize Native Gameplay Tags and Ability System Globals. To do this, you have two options:
   
   - **Option A:** Create a new class that inherits from `UAssetManager`.
   - **Option B:** Use the `UDemo_AssetManager` class provided in the Demo module.

3. Once your custom `AssetManager` class is set up, add the following line to the `DefaultEngine.ini` under the section `[/Script/Engine.Engine]`:

   ```
   AssetManagerClassName=/Script/YourModule.YourClass
   ```

   - Replace `YourModule` with the name of your module and `YourClass` with the name of your custom `AssetManager` class (or use the provided `UDemo_AssetManager`).

#### Example Configuration:
```ini
[/Script/Engine.Engine]
+ActiveGameNameRedirects=(OldGameName="TP_ThirdPersonBP", NewGameName="/Script/EannaMMAS")
+ActiveGameNameRedirects=(OldGameName="/Script/TP_ThirdPersonBP", NewGameName="/Script/EannaMMAS")
AssetManagerClassName=/Script/EannaDemo.Demo_AssetManager
```

This ensures that the asset manager is correctly set up and your GAS system is initialized when the project starts.

### 3. Override `StartInitialLoading`

In your custom `AssetManager` class (or in `UDemo_AssetManager`), override the `StartInitialLoading` function. This function is where you will initialize the **NativeGameplayTags** and **AbilitySystemGlobals**.

#### Example:
```cpp
virtual void StartInitialLoading() override;

void UDemo_AssetManager::StartInitialLoading()
{
    Super::StartInitialLoading();

    // Initialize Native Gameplay Tags
    UTags_BlueprintFunctionLibrary::InitializeNativeGameplayTags();

    // Initialize Global Data for Ability System
    UAbilitySystemGlobals::Get().InitGlobalData();
}
```

You can follow the example provided in the **Demo module** for guidance.

### 4. Ability System Globals Setup

To finalize the setup, you'll need to add the **AbilitySystemGlobals** configuration in the `DefaultGame.ini` file:

1. Open the `Config` folder and edit the `DefaultGame.ini` file.
   
2. Add the following lines at the end of the file:

   ```ini
   [/Script/GameplayAbilities.AbilitySystemGlobals]
   +AbilitySystemGlobalsClassName="/Script/EannaGameplayAbilitySystem.GAS_AbilitySystemGlobals"
   ```

This step ensures that the **AbilitySystemGlobals** is properly initialized when your game starts.

### 5. Compile the Project

With everything set up, you can now compile your project:

- Open Unreal Engine, and compile the project either through the editor or via your preferred IDE (Visual Studio, Rider, etc.).

### 6. Set Custom EnhancedInputComponent.

Go to `Project Settings`>`Engine-Input` and in `DefaultInputComponentClass` change to the plugin custom class `Input_EnhancedInputComponent`

![image](https://github.com/user-attachments/assets/bf4fa68d-1c08-4050-bbf6-b67443241f7c)


---

## Basic Setup in the Plugin

Once you've completed the setup and compiled the project, you'll find a basic demo setup in the plugin’s content folder. This setup includes everything needed to see **EasyGAS** in action and quickly understand how to implement the system in your own project. Here's what you'll find:

### Demo Game Mode

- **Demo_GM:** A fully configured **GameMode** with the **Character**, **PlayerState**, and **PlayerController** already set up. This gives you a working foundation to start playing with GAS out of the box.

### Demo Character

- **CBP_DemoCharacter:** A Character Blueprint that comes pre-configured with the `UGAS_AbilitySystemComponent` already set up and replication enabled, so it’s ready for multiplayer.

### Animation Blueprint

- **ABP_Manny:** A basic **AnimInstance** that provides a foundational animation setup for your character. It’s compatible with the demo character, giving you a quick start on movement and ability animations.

### Demo Player Controller

- **Demo_PlayerController:** This PlayerController is already set up with the necessary **InputActions**, **MappingContext**, and a **DataAsset** to serve as an example of how to bind player inputs to abilities using GAS and Gameplay Tags.

### Gameplay Effects

- **GameplayEffects**: A set of **Meta GameplayEffects** is provided to show how effects are structured and applied. These can be used as a reference for creating your own damage, healing, or status effects.

### Example Gameplay Abilities

You'll find a few **GameplayAbilities** included as examples, such as:

- **Sprint (Left Shift)**
- **Jump (Space Bar)**
- **Damage in an Area (Left Mouse Button)**

These abilities demonstrate how to configure basic abilities in both Blueprint and C++ and how to bind them to inputs using the input system.

### Effect Actor Blueprint and DataAssets

- **Effect Actor BP:** This blueprint demonstrates how to create actors that can apply gameplay effects or tags based on specific conditions (like area overlap or physics volume).
- **DataAssets:** Pre-configured assets provide an example of how to organize ability-related data, such as input actions and gameplay tags, to keep everything modular and data-driven.

### Ready to Play

With everything set up in the demo, the project is **ready to play** right out of the box. Just hit **Play** in the Unreal Editor, and you'll be able to test out the basic abilities, attributes and gameplay effects included in the demo. You can see the Attributes and GameplayTags with **`showdebug abilitysystem**

---

## Explore the Code

I encourage you to dive into the code! I've tried to explain each function and where they are used in the comments, so you'll have a better understanding of how things work. If you're comfortable with C++, I think you’ll find it helpful to see how everything is structured.

If you prefer, you can use the `IGAS_AbilitySystemComponent` interface, but as mentioned earlier, I treat the `GAS_AbilitySystemComponent` as an extension of Unreal’s `AbilitySystemComponent` with added functionality. It’s designed to be flexible while providing additional features that you might need for more complex projects.

## Additional Resources

If you're interested in adding the **Game Animation Sample** to your project via a plugin, feel free to check out my other project, the **MMASPlugin**, which is also available on GitHub.

## Questions or Contributions

If you have any questions or suggestions for improvements, I’m open to feedback and contributions! Feel free to reach out or submit pull requests. This project is a continuous learning experience, and I welcome any contributions that help make it better.

Thank you for trying out **EasyGAS**! I hope it helps you in your development journey.

