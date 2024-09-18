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

