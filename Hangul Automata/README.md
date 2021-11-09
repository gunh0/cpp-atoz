# Finite Automata (FA)

## I. Overview of Finite Automata

### A. Definition of Finite Automata

-   A system model with discrete inputs and outputs used in computer programming and electronic circuit design.

### B. Characteristics of Finite Automata

| Single State | A model that has only one state at a time                 |
| ------------ | --------------------------------------------------------- |
| Transition   | The property of changing to another state due to an event |
| State        | A behavioral node waiting to initiate a transition        |

<br/>

## II. Types of Finite Automata

### A. Deterministic Finite Automata (DFA)

-   A finite automaton where each state has precisely one transitioned state for each possible input.

    -   Transition to B on input a
    -   a -> B, b -> C state transitions
    -   State determined by input

    -   NFAs are often converted to DFAs for efficient utilization of computers.

### B. Non-Deterministic Finite Automata (NFA)

-   A finite automaton where the input can have multiple transitioned states for a given state.

    -   Transition to B on input a
    -   Transition to B, C on input b
    -   Multiple states possible for one input

    *   With input symbols, 0 or more movements by e-transition are possible, and if there is no possible next state, the machine rejects the input.

    -   Any NFA can be converted into a DFA with the same functionality.

<br/>

## III. Applications of Finite Automata

| Category |    Application Area     |                                        Description                                         |
| :------: | :---------------------: | :----------------------------------------------------------------------------------------: |
| H/W Use  |    Digital Circuits     |           Designable logic elements, PLC, logic circuits, FFs, electronic relays           |
| S/W Use  |  Application Designing  |             Event response programming<br/>Event and program state management              |
| S/W Use  |     Text Filtering      |       Determining text appropriateness<br/>Example: validating "string"+"@"+"domain"       |
| S/W Use  | Compiler Design (Lexer) | Translating specific languages into others<br/>Segmenting input code into meaningful units |
| S/W Use  |  Parity Bit Generation  |       Adding parity for error checking<br/>Generating even/odd parity with automata        |

-   Finite automata are useful in situations where operations are triggered by a variety of event types.
